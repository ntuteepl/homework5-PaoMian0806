#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    min
    hour h 30 0.5
    */
    int h,m;
    float ang_h,ang_m;
    scanf("%d%d",&h,&m);
    ang_h = 30*h + 0.5*m;
    ang_m = 6*m;
    float ang = ang_h - ang_m;
    if (ang > 180){
        printf("%.3f",ang-180);
    }
    else if (ang < -180){
        printf("%.3f",ang+360);
    }
    else {
        printf("%.3f",ang);
    }
    return 0;
}

