%{
    #include "LinkedList.h"
    
    void yyerror(const char *s);
    
    int yylex();
    list* l;

    
    char* empty = "";
    int cero = 0;
%}

%union{
    char texto[256];
    int numero;
    char simbolo;
}

%token FIN_LINEA; 
%token DOS_PUNTOS; 
%token MAS; 
%token MENOS;
%token POR;
%token DIVIDIDO; 
%token MOD; 
%token VERDADERO; 
%token FALSO; 
%token MENOR; 
%token MAYOR;
%token MENOR_IGUAL; 
%token MAYOR_IGUAL; 
%token IGUAL; 
%token PARENTESIS_ABRE; 
%token PARENTESIS_CIERRA; 
%token MIENTRAS;
%token HAZ; 
%token SI;
%token COMILLA; 
%token Y;
%token O;
%token NO; 
%token IMPRIMIR; 
%token SINO;
%token <numero> NUMERO;
%token <texto> TEXTO;
%token VAR_NUMERO; 
%token VAR_TEXTO; 
%token <texto> NOMBRE;
%token FIN;
%token <texto> ASIGNACION;


%type<texto> asignacion_st;


%start S;

%%


S: begin CODE end;
begin: {printf("#include \"LinkedList.h\"\n int main() {\n");};

end: {printf("}");};

CODE: | instrucciones;

instrucciones: INSTRUCCION FIN_LINEA | INSTRUCCION FIN_LINEA instrucciones
        | CONTROL_LOGICO | CONTROL_LOGICO instrucciones;

INSTRUCCION: 
    DECLARACION {}
    |asignacion {} 
    |declara_y_asigna {}
    |print {};

DECLARACION: VAR_NUMERO NOMBRE {        
        //printf("printf(\"nombre de var num $2: %s\");\n", $2);

        if(find(l,$2)!=NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert(l,$2, &cero, num);
            printf("int %s;", $2);
        }
    }
    | VAR_TEXTO NOMBRE  {  
        //printf("printf(\"nombre de var text $2: %s\");\n", $2);

        if(find(l,$2) != NULL){
            yyerror("Variable ya definida\n");
            fprintf(stderr, "La variable ya se definio previamente\n");
            YYABORT;
        }
        else {
            insert(l,$2, empty, text);
            printf("char * %s;", $2);
        }
    };

asignacion: ASIGNACION_NUM | ASIGNACION_TEXT;

ASIGNACION_NUM:  NOMBRE ASIGNACION NUMERO{
    struct node* aux;
    if((aux=find(l,$1)) != NULL){
        aux->data = &($3);
        printf("%s=%d;", $1, $3);
    }else{
        yyerror("La variable que se intento asignar no existe");
        fprintf(stderr, "La variable que se intento asignar no existe");
        YYABORT;
    }
};

nombre_st: NOMBRE {printf("%s", $1);};
asignacion_st: ASIGNACION {printf("=");};

ASIGNACION_TEXT:  NOMBRE ASIGNACION TEXTO{
    struct node* aux;
    if((aux=find(l,$1)) != NULL){
        aux->data = (void *)$3;
        printf("%s=%s;", $1, $3);
    }else{
        yyerror("La variable que se intento asignar no existe");
        //fprintf(stderr, "Error en la linea %d. La variable que se intento asignar no existe", yylineno);
        fprintf(stderr, "Error en alguna linea, capo. La variable que se intento asignar no existe");
        YYABORT;
    }
};

declara_y_asigna: VAR_NUMERO NOMBRE ASIGNACION NUMERO{
    struct node* aux;
        if(find(l,$2)!=NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert(l,$2, &($4), 1);
            printf("int %s = %d;", $2, $4);
        }
    }
    |VAR_TEXTO NOMBRE ASIGNACION TEXTO{
        if(find(l,$2)!=NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert(l,$2, $4, 0);
            printf("int %s = %s;", $2, $4);
        }
    };

print: IMPRIMIR PARENTESIS_ABRE  TEXTO  PARENTESIS_CIERRA { printf("printf(%s);", $3) ; }
        | IMPRIMIR PARENTESIS_ABRE NOMBRE PARENTESIS_CIERRA{
            struct node* aux;
            if((aux=find(l,$3)) != NULL){
                if(aux->type == num)
                    printf("printf(\"%%d\", %s);", aux->key);
                if(aux->type == text)
                    printf("printf( %s );", aux->data);
                    
            } else {
                yyerror("La variable que se intento imprimir no existe");
                //fprintf(stderr, "Error en la linea %d. La variable que se intento imprimir no existe", yylineno);
                fprintf(stderr, "Error en alguna linea, capo. La variable que se intento asignar no existe");
                YYABORT;
            }
        };


operacion: valor operador valor{};

operador: MAS{printf(" + ");}
        |MENOS{printf(" - ");}
        |POR{printf(" * ");}
        |DIVIDIDO{printf(" / ");}
        |MOD{printf(" %% ");};
        

parentesis_st_abre: PARENTESIS_ABRE{printf(" ( ");};
parentesis_st_cierra: PARENTESIS_CIERRA{printf(" ) ");};

valor: NOMBRE {
    struct node* aux;
    if((aux=find(l,$1)) != NULL) {
        if(aux->type != 1){
            yyerror("La variable que se intento usar no es un numero");
            //fprintf(stderr, "Error en la linea %d. La variable que se intento usar no es un numero", yylineno);
            fprintf(stderr, "Error en alguna linea, capo. La variable que se intento asignar no existe");        
            YYABORT; 
        } else {
            printf("%s", $1);
        }
    } else {
            yyerror("La variable que se intento usar no existe");
            //fprintf(stderr, "Error en la linea %d. La variable que se intento usar no existe", yylineno);
            fprintf(stderr, "Error en alguna linea, capo. La variable que se intento asignar no existe");        
            YYABORT; 
    } }

    | NUMERO {
        printf("%d", $1);
        };
    | parentesis_st_abre operacion parentesis_st_cierra;

CONTROL_LOGICO: super_si | super_haz;

super_si: si_st sentencia_booleana entonces_haz instrucciones fin_si;

si_st: SI {printf("if(");};

entonces_haz: DOS_PUNTOS {printf("){");};

fin_si: FIN {printf("}");} ;


super_haz:  haz_st instrucciones fin_haz mientras_st sentencia_booleana fin_mientras;

haz_st: HAZ {printf("do{");};

fin_haz: FIN {printf("}");};

mientras_st: MIENTRAS {printf("while(");};

fin_mientras: FIN_LINEA {printf(");\n");};


sentencia_booleana: boolean
        |boolean sentencia_logica boolean
        |parentesis_st_abre sentencia_booleana parentesis_st_cierra sentencia_logica boolean
        |boolean sentencia_logica parentesis_st_abre sentencia_booleana parentesis_st_cierra
        |sentencia_not parentesis_st_abre sentencia_booleana parentesis_st_cierra
        |sentencia_not boolean
        |sentencia_comparativa;

sentencia_logica: Y {printf("&&");}
        | O {printf("||");};

sentencia_not: NO {printf("!");}
        | NO sentencia_not;

boolean: VERDADERO{printf("1");}
        | FALSO{printf("0");};

sentencia_comparativa: valor comparador valor;
                        
comparador: MENOR {printf("<");}
        | MAYOR {printf(">");}
        | MAYOR_IGUAL {printf(">=");}
        | MENOR_IGUAL {printf("<=");}
        | IGUAL{printf("==");};
%%


int main(void) {
    l = createList();
    yyparse();
    freeList(l);
}
