#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time,salary;
    float money = 0;
    scanf("%d%d",&time,&salary);
    if (time >= 121){
        money += (time - 120)*1.66*salary;
        time = 120;
    }
    if (time >= 61){
        money += (time - 60)*1.33*salary;
        time = 60;
    }
    money += time*salary;
    printf("%.1f",money);
    return 0;
}
