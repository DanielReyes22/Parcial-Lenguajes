#!/usr/bin/awk -f

# Definimos una función que clasifica la entrada según expresiones regulares
function obtener_token(expresion) {
    if (expresion ~ /^\+\+$/) {
        return "INCR";  # "++"
    } else if (expresion ~ /^\+$/) {
        return "SUMA";  # "+"
    } else if (expresion ~ /^[0-9]+\.[0-9]+$/) {
        return "REAL";  # Numero decimal
    } else if (expresion ~ /^[0-9]+$/) {
        return "ENTERO";  # Numero entero
    } else {
        return "DESCONOCIDO";
    }
}

# A cada línea de entrada, obtenemos su token correspondiente
{
    print "Expresión:", $0, "-> Token:", obtener_token($0);

}
