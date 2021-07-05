/*: Design a structure to hold the data for a mailing list. Write a function to print out the data.*/
#include <stdio.h>
char line[100]; 
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];
void funcion(int data){ 
 int i;
    printf("Ingrese los valores de la siguiente manera :\n");
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\ndatos %d,\n", s[i].roll);
        printf("primer valor: ");
          fgets(line, sizeof(line), stdin);
        sscanf(line,"%s", s[i].firstName);
        printf("segundo valor : ");
          fgets(line, sizeof(line), stdin);
        sscanf(line,"%f", &s[i].marks);
    }
    printf("Informacion :\n\n");
    for (i = 0; i < 5; ++i) {
        printf("\ndatos: %d\n", i + 1);
        printf("valores: ");
        puts(s[i].firstName);
        printf("segundo valores: %.1f", s[i].marks);
        printf("\n");
}

}
int main() {int data1;
funcion(data1);
    return 0;
}
