#include<stdio.h>
void function(chart1){
struct time
{
    int hours;
    int minutes;
    int seconds;
};
{
    struct time start, stop, diff;
    printf("Inserte un valor para horas,minutos y segundos : ");
    scanf("%d%d%d", &start.hours,&start.minutes, &start.seconds);
    printf("Inserte un valor para horas,minutos y segundos: ");
    scanf("%d%d%d", &stop.hours,&stop.minutes, &stop.seconds);
    if(start.seconds > stop.seconds)
    {
        stop.seconds += 60;
        --stop.minutes;
    }
    if(start.minutes > stop.minutes)
    {
        stop.minutes += 60;
        --stop.hours;
    }
    diff.seconds = stop.seconds - start.seconds;
    diff.minutes = stop.minutes - start.minutes;
    diff.hours = stop.hours - start.hours;
    printf("La diferencias es  = %d : %d : %d", diff.hours, diff.minutes, diff.seconds);}
}

int main(){int chart1;
function(chart1);

    return 0;
     }
