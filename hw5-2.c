#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time;
    float money;
    scanf("%d",&time);
    if (time >= 1500) {
        money = time*0.9*0.79+0.05;
    }
    else if (time >= 800){
        money = time*0.9*0.9+0.05;
    }
    else{
        money = time*0.9;
    }
    printf("%.1f",money);
    return 0;
}

