#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    min 6
    hour h 30 0.5
    */
    int h,m;
    float ang_h,ang_m;
    scanf("%d%d",&h,&m);
    ang_h = 30*h + 0.5*m;
    ang_m = 6*m;
    float ang1 = ang_h - ang_m;
    if (ang1 < 0){
        ang1 *= -1;
    }
    float ang2 = 360 - ang1;
    if (ang2 < 0){
        ang2 *= -1;
    }
    if (ang1 < ang2){
        printf("%.3f",ang1);
    }
    else {
        printf("%.3f",ang2);
    }
    return 0;
}
