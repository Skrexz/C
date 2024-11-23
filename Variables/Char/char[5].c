/*char es un tipo de variable en el cual sirve para almacenar un caracter y cadenas de caracteres.

Cuando se vaya a declarar un char con límite, este estrictamente dejará llegar hasta el punto del limite. Si se pasa del limite, dara un error.
El error que da es el desbordamiento del buffer, en el cual, es un desbordamiento de memoria.

En el siguiente ejemplo es la manera que estrictamente char solo deja llegar hasta el limite que pongamos
*/

#include <stdio.h>

int main() {

char nombre[5] = "Juan";
printf("Este es tu nombre: %s\n", nombre);
return 0;
}

/*En este ejemplo el nombre que pusimos fue "Juan", en el cual tiene 4 letras y son 4 caracteres, sin embargo, en C se debe dejar un espacio más de rango para el caracter nulo
El caracter nulo es :\0", internamente se muestra así.

Nota: Siempre dejar un caracter más en el rango para que entre el caracter nulo y así poder imprimir
*/