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
sscanf(line,"%[^\n]s", s);
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
