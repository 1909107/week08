#include <stdio.h>
#include <string.h>
char line[100]; 
int main()

{
    char s[100];
    int count, i;
 
    printf("Ingrese una cadena :\n");
fgets(line, sizeof(line), stdin);
sscanf(line,"%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("El numero de palabras en la cadena es : %d\n", count + 1);
return 0; 
}
