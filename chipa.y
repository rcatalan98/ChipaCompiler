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
%type<texto> texto_st;

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

DECLARACION: dec_nombre_st {        
        printf(";");
    };

asignacion: nombre_st ASIGNACION_NUM | nombre_st ASIGNACION_TEXT;

ASIGNACION_NUM:  asignacion_st valor{printf(";");};

ASIGNACION_TEXT:  asignacion_st texto_st{printf(";");};

nombre_st: NOMBRE {
    struct node* aux;
    if((aux=find(l,$1)) == NULL){
        yyerror("La variable que se intento asignar no existe");
        //fprintf(stderr, "Error en la linea %d. La variable que se intento asignar no existe", yylineno);
        fprintf(stderr, "Error en alguna linea, capo. La variable que se intento asignar no existe");
        YYABORT;
    }else{
        printf("%s", $1);
    }
};

dec_nombre_st: VAR_NUMERO NOMBRE {
    struct node* aux;
        if(find(l,$2)!=NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert(l,$2, num);
            printf("int %s ", $2);
        }
}
| VAR_TEXTO NOMBRE{
    if(find(l,$2)!=NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert(l,$2, text);
            printf("char * %s ", $2);
        }
}
asignacion_st: ASIGNACION {printf("=");};
texto_st: TEXTO {printf("%s", $1);}

declara_y_asigna: dec_nombre_st ASIGNACION_TEXT 
    |dec_nombre_st ASIGNACION_NUM;

print: IMPRIMIR PARENTESIS_ABRE  TEXTO  PARENTESIS_CIERRA { printf("printf(%s);", $3) ; }
        | IMPRIMIR PARENTESIS_ABRE NOMBRE PARENTESIS_CIERRA{
            struct node* aux;
            if((aux=find(l,$3)) != NULL){
                if(aux->type == num)
                    printf("printf(\"%%d\", %s);", aux->key);
                if(aux->type == text)
                    printf("printf(\"%%s\", %s);", aux->key);
                    
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

valor: 
    nombre_st
    | NUMERO {
        printf("%d", $1);
        };
    | parentesis_st_abre operacion parentesis_st_cierra
    | ;

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
