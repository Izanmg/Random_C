#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializar la semilla del generador con el tiempo actual
    srand(time(NULL));

    // Generar número aleatorio entre 0 y 99
    int numero = rand() % 100;

    // Imprimir el número aleatorio
    printf("El nombre aleatori generat és: %d\n", numero);

    return 0;
}
