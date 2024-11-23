/*char es un tipo de variable en el cual sirve para almacenar un caracter y cadenas de caracteres.

  Esta cadena de caracteres puede estar dentro de un rango declarado antes de escribir dicha cadena o declara el limite asi misma leyendo cuantos caracteres tiene.
  Un ejemplo de caracteres es el siguiente: "Hola". Los anteriores son caracteres que se componen de 4 letras en el cual conforman la palabra "Hola", otro ejemplo
  que se puede agregar, son los numeros: 123. Los numeros cuando se declara con "char" son caracteres.

  Los caracteres se pueden combinar entre letras y numeros, un ejemplo de este es: "4h0l4".

  char[] nombre "Alexis";
  El lenguaje C hace de cuenta que al no tener un limitante dentro de las llaves "[]" toma como referencia el conteo de caracteres que tiene. 
  "Alexis" tiene 6 caracteres, lo cual, aunque tenga "[]", internamente el limite son 6 caracteres.
 */

#include <stdio.h>

int main(){

char nombre[] = "Alexis";
printf("Este es tu nombre: %s\n", nombre);
return 0;

}