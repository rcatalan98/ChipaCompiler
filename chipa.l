% {
    Declaraciones en C
% }

    //sección de definiciones
    FIN_LINEA ";"
    DOS_PUNTOS " : "
    MAS " + "
    MENOS " - "
    POR " * "
    DIVIDIDO " / "
    MOD "mod "
    VERDADERO " verdadero "
    FALSO " falso " 
    MENOR " < "
    MAYOR " > "
    MENOR_IGUAL " <= "
    MAYOR_IGUAL " >= "
    IGUAL " == "
    ASIGNACION " = "
    PARENTESIS_ABRE "("
    PARENTESIS_CIERRA ")"
    MIENTRAS " mientras: "
    HAZ " haz: "
    SI " si "
    COMILLA ["]
    Y " y "
    O " o "
    NO " no "
    IMPRIMIR " imprimir "
    SINO: " sino "
    VAR_NUMERO " numero "
    VAR_TEXTO " texto "
    TEXTO ["][.|\n]*["]
    ENTERO [-]?[0-9]+

%%

    //sección de reglas
<patron (exp reg)> <reglas (en c)>
[\t] ECHO;
{FIN_LINEA} return FIN_LINEA;

    {DOS_PUNTOS} return DOS_PUNTOS; 
    {MAS} return MAS;
    {MENOS} return MENOS;
    {POR} return POR;
    {DIVIDIDO} return DIVIDIDO ;
    {MOD} return MOD ;
    {VERDADERO} return verdadero;
    {FALSO} return FALSO;
    {MENOR} return  MENOR;
    {MAYOR} return MAYOR;
    {MENOR_IGUAL} return MANOR_IGUAL;
    {MAYOR_IGUAL} return MAYOR_IGUAL;
    {IGUAL} return IGUAL;
    {ASIGNACION} return ASIGNACION;
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
    {NUMERO} {yylval.number = atoi(yytext); return NUMERO;}
    {TEXTO} {yylval.string = yytext; return TEXTO;}
    {VAR_ENTERO} return VAR_ENTERO;
    {VAR_NUMERO} return VAR_NUMERO;
. ECHO;

%%

    //{sección de código de usuario }


