#include "code.h"

int main () {

    int num; // Longitud del array
    int *ptr = NULL; // Puntero al array

    puts("Introduze numero de elementos: ");
    scanf("%d", &num);
    
    // Reservar memoria

    ptr = (int*) malloc(num * sizeof(int));

    if (ptr == NULL) {
        puts("Error en la asignacion de memoria");
        exit(1);
    } else {
        puts("Memoria reservada correctamente");
    }

    // Con este bloque de codigo llenamos el array con numeros aleatorios
    srand(time(NULL));
    for(int i = 0; i < num; i++) {
        ptr[i] = rand() % 100;
    }

    // Imprimir el array en pantalla
    puts("\nNumeros:");
    for(int i = 0; i < num; i++) {
        printf("%d\n", ptr[i]);
    }

    // Liberar la memoria
    free(ptr);
    ptr = NULL;
    return 0;

}