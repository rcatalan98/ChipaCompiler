%{#include "LinkedList.h"%}


%token FIN_LINEA 
%token DOS_PUNTOS 
%token MAS 
%token MENOS
%token POR
%token DIVIDIDO 
%token MOD 
%token VERDADERO 
%token FALSO 
%token MENOR 
%token MAYOR
%token MENOR_IGUAL 
%token MAYOR_IGUAL 
%token IGUAL 
%token ASIGNACION
%token PARENTESIS_ABRE 
%token PARENTESIS_CIERRA 
%token MIENTRAS
%token HAZ 
%token SI 
%token COMILLA 
%token Y
%token O
%token NO 
%token IMPRIMIR 
%token SINO
%token NUMERO
%token TEXTO
%token VAR_NUMERO 
%token VAR_TEXTO 
%token NOMBRE

%start S

%%


S: begin CODE end;
begin: {printf("include \"LinkedList.h\"\n
        int main() {
            ");};

end: {printf("}");};

CODE: | INSTRUCCIÓN FIN_LINEA | CONTROL_LÓGICO;

INSTRUCCIÓN: 
    DECLARACIÓN {}
 //   |DECLARACION '=' valor {$$ = $1 = $3;};
    |asignación {} 
    |print {}

DECLARACIÓN: VAR_NUMERO NOMBRE {
        if(find($2)!=NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert($2, 0, 1);
        }
    }
    | VAR_STRING NOMBRE  {     
        if(find($2)!=NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert($2, '\0', 0);
        };

asignación: ASIGNACIÓN_NUM | ASIGNACIÓN_TEXT;

ASIGNACIÓN_NUM:  NOMBRE '=' NUMERO{
    struct node* aux;
    if(aux=find($1) != NULL){
        (int)aux->data = $3;
    }else{
        yyerror("La variable que se intento asignar no existe");
        fprintf(stderr, "La variable que se intento asignar no existe");
        YYABORT;
    }
};
    | NOMBRE '=' operación;

ASIGNACIÓN_TEXT:  NOMBRE '=' TEXTO{
    struct node* aux;
    if(aux=find($1) != NULL){
        (char*)aux->data = $3;
    }else{
        yyerror("La variable que se intento asignar no existe");
        fprintf(stderr, "Error en la linea %d. La variable que se intento asignar no existe", yylineno);
        YYABORT;
    }
};

print: PRINT '(' TEXTO ')' { printf("printf(\" %s \")", $3); }; 
        | PRINT '(' NOMBRE ')'{
            struct node* aux;
            if(aux=find($3) != NULL){
                if(aux->type == 1)
                    printf("printf(\" %d \")", aux->data);
                if(aux->type == 0)
                    printf("printf(\" %s \")", aux->data);
                    
            } else {
                yyerror("La variable que se intento imprimir no existe");
                fprintf(stderr, "Error en la linea %d. La variable que se intento imprimir no existe", yylineno);
                YYABORT;
            };


// operación: valor operador valor {
//     printf("% %c %", ,$2 , )
//     $$ = $1 $2 $3;
//     }
//     | valor operador NOMBRE | NOMBRE operador valor | NOMBRE operador NOMBRE | valor;

operación: valor | operación operador operación | parentesis_st_abre operación parentesis_st_cierra;

operador: MAS{printf(" + ")};
        |MENOS{printf(" - ")};
        |POR{printf(" * ")};
        |DIVIDIDO{printf(" / ")};
        |MOD{printf(" % ")};

parentesis_st_abre: PARENTESIS_ABRE{printf(" ( ")};
parentesis_st_abre: PARENTESIS_CIERRA{printf(" ) ")};

valor: NOMBRE {
    struct node* aux;
    if(aux=find($1) != NULL) {
        if(aux->type != 1){
            yyerror("La variable que se intento usar no es un numero");
            fprintf(stderr, "Error en la linea %d. La variable que se intento usar no es un numero", yylineno);
            YYABORT; 
        } else {
            printf("%s", $1);
        }
    } else {
            yyerror("La variable que se intento usar no existe");
            fprintf(stderr, "Error en la linea %d. La variable que se intento usar no existe", yylineno);
            YYABORT; 
    }

}
    | NUMERO {
        printf("%d", $1);
    };

SI boolean : CODE FIN

CONTROL_LÓGICO: super_si | super_haz;

super_si: si_st sentencia_booleana entonces_haz CODE fin_si

si_st: SI {printf("if(")};

entonces_haz: ':' {printf("){\n")};

fin_si: FIN {printf("}\n")} ;


super_haz:  haz_st ':' CODE fin_haz mientras_st sentencia_booleana fin_mientras;

haz_st: HAZ {printf("do{")};

fin_haz: FIN {printf("}\n")};

mientras_st: MIENTRAS {printf("while(")};

fin_mientras: FIN_LINEA {printf(");\n")};


sentencia_booleana: boolean | sentencia_booleana sentencia_lógica sentencia_booleana | sentencia_not sentencia_booleana | sentencia_comparativa;

sentencia_lógica: Y {printf("&&");}
        | O {printf("||");};

sentencia_not: {printf("!");}
        | NO sentencia_not;

boolean: VERDADERO{printf("1");}
        | FALSO{printf("0");};

sentencia_comparativa: valor comparador valor | valor comparador NOMBRE | NOMBRE comparador valor | NOMBRE comparador NOMBRE;

comparador: MENOR {printf("<");}
        | MAYOR {printf(">");}
        | MAYOR_IGUAL {printf(">=");}
        | MENOR_IGUAL {printf("<=");}
        | IGUAL{printf("==");};




%%
