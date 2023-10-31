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
    float ang2 = ang_m - ang_h;
    if (ang1 >= 180){
        ang1 -= 180;
    }
    if (ang2 >= 180){
        ang2 -= 180;
    }
    if (ang1 > 0 && ang2 > 0){
        if (ang1 < ang2 && ang2 < 180){
            printf(".3f",ang2);
        }
        else {
            printf(".3f",ang1);
        }
    }
    else if (ang1 < 0 && ang2 < 0){
        ang1 += 360;
        ang2 += 360;
        if (ang1 < ang2 && ang2 < 180){
            printf("%.3f",ang2);
        }
        else {
            printf("%.3f",ang1);
        }
    }
    else if (ang1 < 0){
        ang1 += 360;
        if (ang1 < ang2 && ang2 < 180){
            printf("%.3f",ang2);
        }
        else {
            printf("%.3f",ang1);
        }
    }
    else if (ang2 < 0){
        ang2 += 360;
        if (ang1 < ang2 && ang2 < 180){
            printf("%.3f",ang2);
        }
        else {
            printf("%.3f",ang1);
        }
    }
    return 0;
}
