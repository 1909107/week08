#include <stdio.h>
#include <string.h>
char line[100];
int main()
{
char s[100];
char l[100];
int count1, count2, i,j;
printf("Ingrese la primera cadena:\n");
fgets(line, sizeof(line), stdin);
sscanf(line,"%[^\n]s", s);#include <stdio.h>
#include <string.h>

//Prototipo de la funcion "compare" 
int compare (char s[100]);
void mayorQue(int a, int b);

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

void mayorQue(int a, int b){
	
	if(a > b){
		printf("El primer string es el mas grande");
	}else if(b > a){
		printf("El segundo string es el mas grande");
	}else if (a == b){
		printf("Los dos string son iguales");
	}
	
	
}


int main(void) {

char cad1[100],cad2[100];
int resultado1, resultado2;

printf("Ingrese una cadena :\n");
fgets(line, sizeof(line), stdin);
sscanf(line,"%[^\n]s", cad1);
printf("Ingrese la segunda cadena :\n");
fgets(line, sizeof(line), stdin);
sscanf(line,"%[^\n]s", cad2);

resultado1 = compare (cad1);
resultado2 = compare(cad2); /*En esta variable guardamos el dato que estamos devolviendo de la funcion "compare" y la guardamos en 
en la variable result, recuerda que deben ser el mismo tipo de dato*/
printf("%d \n%d\n",resultado1,resultado2);

mayorQue(resultado1,resultado2);

return 0;
}

for (i = 0;s[i] != '\0';i++)
{
if (s[i] == ' ' && s[i+1] != ' ')
count1++;
}printf("Ingrese la segunda cadena:\n");
fgets(line, sizeof(line), stdin);
sscanf(line,"%[^\n]l", l);
for (j = 0;l[j] != '\0';j++)
{
if (l[j] == ' ' && l[j+1] != ' ')
count2++;
}if(count1>count2){
printf("la cadena uno es mayor que la dos");
}
else{
printf("la cadena dos es mayor que la uno");
}
return 0;
}
