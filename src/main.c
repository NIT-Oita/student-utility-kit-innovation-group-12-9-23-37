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

    kesseki_ui();
    scanf("%lf", &kesseki);


    tanni_ui();
    scanf("%lf",&tanni);

    kakuninn_ui(kyouka,tanni);

    jumyou_ui(kyouka,kesseki,tanni);

    

    return 0;
}