#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicio = clock(); //

    long long suma = 0;
    for (long long i = 1; i <= 100000000; i++) {
        suma += i;
    }

    clock_t fin = clock();
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("Suma total: %lld\n", suma);
    printf("Tiempo de ejecución en C: %f segundos\n", tiempo);

    return 0;
}
