/*chapter 9 exercise that lets me know if a person is right for you or not */

#include <stdio.h>

#include <string.h>

void funcion(steep1){



char line[100];

char s[100];

char l[100];

int count1, count2, i,j;

printf("ingresa tu nombre completo con espacios:\n");

fgets(line, sizeof(line), stdin);

sscanf(line,"%[^\n]s", s);

for (i = 0;s[i] != '\0';i++)

{

if (s[i] == ' ' && s[i+1] != ' ')

count1++;

}printf("Ingresa el nombre de la persona que amas con espacios:\n");

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

}





int main(){int steep1;

funcion(steep1);

return 0;

}
