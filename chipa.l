%{
    #include "y.tab.h"
%}

FIN_LINEA ";"
FIN "fin"
DOS_PUNTOS ":"
MAS "+"
MENOS "-"
POR "*"
DIVIDIDO "/"
MOD "mod"
VERDADERO "verdadero"
FALSO "falso" 
MENOR "<"
MAYOR ">"
MENOR_IGUAL "<="
MAYOR_IGUAL ">="
IGUAL "=="
PARENTESIS_ABRE "("
PARENTESIS_CIERRA ")"
MIENTRAS "mientras: "
HAZ "haz: "
SI "si "
COMILLA ["]
Y " y "
O " o "
NO "no "
IMPRIMIR "imprimir "
SINO "sino: "
VAR_NUMERO "numero "
VAR_TEXTO "texto "
TEXTO ["][.|\n]*["]
NUMERO [-]?[0-9]+
NOMBRE [a-z|A-Z|0-9|_]+

%%
[\t] ECHO;
[\n] {ECHO; yylineno++;};

{FIN_LINEA} return FIN_LINEA;

{DOS_PUNTOS} return DOS_PUNTOS; 

{MAS} return MAS;
{MENOS} return MENOS;
{POR} return POR;
{DIVIDIDO} return DIVIDIDO ;
{MOD} return MOD ;
{VERDADERO} return VERDADERO;
{FALSO} return FALSO;
{MENOR} return  MENOR;
{MAYOR} return MAYOR;
{MENOR_IGUAL} return MENOR_IGUAL;
{MAYOR_IGUAL} return MAYOR_IGUAL;
{IGUAL} return IGUAL;
{PARENTESIS_ABRE} return PARENTESIS_ABRE;
{PARENTESIS_CIERRA} return PARENTESIS_CIERRA;
{MIENTRAS} return MIENTRAS;
{HAZ} return HAZ;
{SI} return SI;
{COMILLA} return COMILLA;
{Y} return Y;
{O} return O;
{NO} return NO;
{IMPRIMIR} return IMPRIMIR;
{SINO} return SINO;
{NUMERO} {yylval.numero = atoi(yytext); return NUMERO;}
{TEXTO} {yylval.texto = yytext; return TEXTO;}
{VAR_TEXTO} return VAR_TEXTO;
{VAR_NUMERO} return VAR_NUMERO;
{NOMBRE} return NOMBRE;
. ECHO;

%%

int yyerror(const char * msg){
    fprintf(stderr, "ERROR: %s en linea %d", msg, yylineno);
    return 0;
}
