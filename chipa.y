%{
    #include "LinkedList.h"
 
    #define MAX_LENGTH 128

    void yyerror(const char *s);
    int i = 0;
    int yylex();
    list* l;

%}

%union{
    char texto[256];
    int numero;
    char simbolo;
}

%token RECETA
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
%token DISTINTO;
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
%token LEER;
%token CONCAT;
%token COMA;

%type<texto> asignacion_st;
%type<texto> texto_st;
%type<texto> operacion_texto;
%type<texto> valor_texto;

%start S;

%%


S: begin code end;
begin: RECETA{
    printf("#include \"LinkedList.h\" \nint main() {");

    };

end: {
    printf("\n}");
    };

code: | instrucciones;

instrucciones: instruccion FIN_LINEA | instruccion FIN_LINEA instrucciones
        | control_logico | control_logico instrucciones;

instruccion: 
    declaracion {}
    |asignar {} 
    |declara_y_asigna {}
    |print {}
    |read {}
    |concat {};

declaracion: dec_nombre_st {        
        printf(";");
    };

asignar: nombre_st asignacion_num | nombre_st asignacion_text;

asignacion_num:  asignacion_st valor{printf(";");};

asignacion_text:  asignacion_st texto_st{printf(";");};

nombre_st: NOMBRE {
    struct node* aux;
    if((aux=find(l,$1)) == NULL){
        yyerror("La variable que se intento asignar no existe");
        fprintf(stderr, "La variable que se intento asignar no existe");
        YYABORT;
    }else{
        printf("%s", $1);
    }
};

nombre_str_st: NOMBRE {
    struct node* aux;
    if((aux=find(l,$1)) == NULL){
        yyerror("La variable que se intento asignar no existe");
        fprintf(stderr, "La variable %s que se intento asignar no existe", $1);
        printf("La variable %s que se intento asignar no existe", $1);
        YYABORT;
    }else if(aux->type != text){
        yyerror("La variable que se intento acceder no es texto");
        fprintf(stderr, "La variable %s que se intento acceder no es texto", $1);
        YYABORT;
    }
    printf("%s", $1);
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
            //printf("char %s[%d + 1] ", $2, MAX_LENGTH);
            printf("char * %s", $2);
        }
};
asignacion_st: ASIGNACION {printf("=");};
texto_st: TEXTO {printf("%s", $1);};

declara_y_asigna: dec_nombre_st asignacion_text 
    |dec_nombre_st asignacion_num;

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
                fprintf(stderr, "La variable que se intento imprimir no existe");
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

control_logico: super_si | super_haz;

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
        |parentesis_st_abre sentencia_booleana parentesis_st_cierra sentencia_logica sentencia_booleana
        |boolean sentencia_logica parentesis_st_abre sentencia_booleana parentesis_st_cierra
        |sentencia_not parentesis_st_abre sentencia_booleana parentesis_st_cierra
        |sentencia_not boolean
        |parentesis_st_abre sentencia_booleana parentesis_st_cierra
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
        | IGUAL{printf("==");}
        | DISTINTO{printf("!=");};

read: LEER PARENTESIS_ABRE NOMBRE PARENTESIS_CIERRA{
     struct node * aux;
     if((aux=find(l, $3)) == NULL){
        yyerror("La variable que se intento asignar no existe\n");
        fprintf(stderr, "La variable que se intento leer no existe\n");
        YYABORT;
     } else if (aux->type == text) {
        printf(" char aux_sc%d[%d];\n", i ,MAX_LENGTH + 1);
        //printf(" %s = (char *) malloc(sizeof(char) * %d);\n", $3, MAX_LENGTH + 1);
        printf("scanf(\"%%s\", aux_sc%d);\n", i);
        printf("%s  = aux_sc%d;\n", $3,i++);
     } else if (aux->type == num) {
        printf("scanf(\"%%d\", &%s);\n", $3);         
     } else {
        yyerror("Error en el tipo de dato de la variable\n");
        fprintf(stderr, "Error en el tipo de dato de la variable\n");
        YYABORT;         
     }
     
};

concat: concat_op operacion_texto {};

operacion_texto: PARENTESIS_ABRE valor_texto coma_st concat_op2 valor_texto PARENTESIS_CIERRA{
    printf(");\n");
    printf("%s = aux%d;", $2, i++);
};

valor_texto: nombre_str_st {}
        | TEXTO {printf("%s", $1);};

coma_st: COMA {printf(");\n");
//printf(",");
};

concat_op: CONCAT {
    printf("char aux%d[%d] = \"\";\n", i, MAX_LENGTH * 2);
    printf("strcat(aux%d,", i);
    //printf("strcat(");
};

concat_op2: {
    printf("strcat(aux%d,", i);
};
%%


int main(void) {
    l = createList();
    yyparse();
    freeList(l);
}
