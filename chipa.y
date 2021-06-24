% {
    Declaraciones
} 

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
{producciones y reglas de traducción}

S: begin CODE end;
begin: {printf("int main() {");};
end: {printf("}");};

CODE: | INSTRUCCIÓN FIN_LINEA | CONTROL_LÓGICO;

INSTRUCCIÓN: 
    DECLARACIÓN {}
    |DECLARACION '=' valor {$$ = $1 = $3;};
    |ASIGNACIÓN {} 
    |print {}

DECLARACIÓN: VAR_NUMERO NOMBRE | VAR_STRING NOMBRE;

ASIGNACIÓN:  NOMBRE '=' valor;

print: PRINT('"'valor'"') {printf("printf("valor"");}; 
        |PRINT(NOMBRE){printf("printf(hashMap(NOMBRE->valor))};

valor: VALOR | operación | '('operación')';

operación: valor operador valor | valor operador NOMBRE | NOMBRE operador valor | NOMBRE operador NOMBRE | valor;


CONTROL_LÓGICO: SI sentencia_booleana':' CODE FIN
                |HAZ':' CODE FIN MIENTRAS sentencia_booleana;

sentencia_booleana: boolean | sentencia_booleana sentencia_lógica sentencia_booleana | sentencia_not sentencia_booleana | sentencia_comparativa;
sentencia_lógica: Y | O;
sentencia_not: | NO sentencia_not;
boolean: VERDADERO | FALSO;

sentencia_comparativa: valor comparador valor | valor comparador NOMBRE | NOMBRE comparador valor | NOMBRE comparador NOMBRE;
comparador: MENOR | MAYOR | MAYOR_IGUAL | MENOR_IGUAL | IGUAL;
operador: MAS | MENOS | POR | DIVIDIDO | MOD;



%%
{rutinas de C}