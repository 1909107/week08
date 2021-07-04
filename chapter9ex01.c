#include <stdio.h>
#include <string.h>

//Prototipo de la funcion "compare" 
int compare (char s[100]);

char line[100];

/*Funcion "compare" te va a devolver un valor entero, que le puedes asignar a una variable en la funcion main
Recuerda que existen diferentes tipos de datos en las funciones asi como en las variables, depende de que valor quieras devolver o 
Almacenar en tu variable
En este caso, queremos devolver un valor de tipo entero, por lo tanto tenemos que declarar nuestra funcion como entero
y tenemos que devolverlo con la palabra reservada "return" seguido por la variable del tipo de la funcion que queremos devolver */
int compare (char s[100]){

int count, i;
for (i = 0;s[i] != '\0';i++) {
if (s[i] == ' ' && s[i+1] != ' ')
count++; }

return count;
}



int main(void) {

char cad1[100];
int result;

printf("Ingrese una cadena :\n");
fgets(line, sizeof(line), stdin);
sscanf(line,"%[^\n]s", cad1);

result = compare (cad1); /*En esta variable guardamos el dato que estamos devolviendo de la funcion "compare" y la guardamos en 
en la variable result, recuerda que deben ser el mismo tipo de dato*/
printf("The result is: %d",result+1);

return 0;
}
