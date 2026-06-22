#include <stdio.h>
#include <string.h>
#include "ui.h"
#include "logic.h"


int main(){
    char kyouka[100];
    double kesseki; 
    double tanni;


    int aisatu_ui();
    int kyouka_ui();
    scanf_s("%s",&kyouka,100);


    int kesseki_ui();
    scanf("%.f",&kesseki);


    int tanni_ui();
    scanf("%.f",&tanni);
    

    int jumyou_ui(kyouka,kesseki,tanni);


    int kakuninn_ui();


    int END_ui();
    return 0;
}