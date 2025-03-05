#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINEA 1024

int contar_palabra(const char *archivo, const char *palabra) {
    FILE *fp = fopen(archivo, "r");
    if (fp == NULL) {
        printf("Error: No se pudo abrir el archivo %s\n", archivo);
        return -1;
    }

    char linea[MAX_LINEA];
    int contador = 0;
    size_t len_palabra = strlen(palabra);

    while (fgets(linea, MAX_LINEA, fp) != NULL) {
        char *ptr = linea;

        // Buscar la palabra dentro de la línea
        while ((ptr = strstr(ptr, palabra)) != NULL) {
            contador++;
            ptr += len_palabra;  // Avanzamos el puntero
        }
    }

    fclose(fp);  // Cerramos el archivo
    return contador;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <archivo> <palabra>\n", argv[0]);
        return 1;
    }

    const char *archivo = argv[1];
    const char *palabra = argv[2];

    int resultado = contar_palabra(archivo, palabra);

    if (resultado >= 0) {
        printf("%s se repite %d veces en el texto.\n", palabra, resultado);
    }

    return 0;
}
