/*Write a function begins(string1,string2) that returns true if 
string1 begins string2. Write a program to test the function. */
#include <stdio.h>
#include <string.h>
int compare (char s[100]);
void mayorQue(int a, int b);
char line[100];
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
		printf("las dos cadenas son iguales");
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
resultado2 = compare(cad2); 
printf("%d \n%d\n",resultado1,resultado2);

mayorQue(resultado1,resultado2);

return 0;
}
