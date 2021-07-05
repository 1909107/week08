/*chapter 9 exercise that lets me know if a person is right for you or not */
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
		printf("ingresa tu nombre completo con espacios");
	}else if(b > a){
		printf("Ingresa el nombre de la persona que amas con espacios");
	}
	
}

int main(void) {

char cad1[100],cad2[100];

fgets(line, sizeof(line), stdin);
sscanf(line,"%[^\n]l", l);
for (j = 0;l[j] != '\0';j++)
{
if (l[j] == ' ' && l[j+1] != ' ')
count2++;
}if(count1>count2){
printf("esa persona es la indicada");
}
else{
printf("sal de ahi soldado");
}
return 0;
mayorQue(resultado1,resultado2);

return 0;
}
