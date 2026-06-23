#include <stdio.h>
#include <string.h>
#include "ui.h"
#include "logic.h"

double tannikazu = 0;

int main(){
    char kyouka[100];
    double kesseki;
    double tanni;


    aisatu_ui();
    kyouka_ui();
    scanf_s("%s",&kyouka,100);

    tanni_ui();
    scanf("%lf",&tanni);

    if(jumyou(kyouka,0,tanni)<0){
        teokure();
        return 0;
    }

    kesseki_ui();
    scanf("%lf", &kesseki);

    kakuninn_ui(kyouka,tanni);

    jumyou_ui(kyouka,kesseki,tanni);

    

    return 0;
}