%{
#include <stdio.h>  
%}

%%  

[ ]*lambda[ ]+[a-zA-Z_][a-zA-Z0-9_]*[ ]*:[ ]*[a-zA-Z0-9_+*/\-\(\) ]+  { 
    printf("acepta\n");  // Ahora imprime "acepta" en minúsculas
    return 0;
}

.|\n  { 
    printf("no acepta\n");  
    return 0;
}

%% 

int main() {
    yylex();  // Llamamos al analizador léxico
    return 0;
}

int yywrap() {
    return 1;
}
