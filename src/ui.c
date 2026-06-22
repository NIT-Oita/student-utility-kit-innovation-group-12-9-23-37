#include "ui.h"
#include "logic.h"
#include <stdio.h>

int aisatu_ui(){
    printf("これはあなたの履修する授業を管理するシステムです。\n");
    return 0;
}


int kyouka_ui(){
    printf("あなたが確認したい教科名を入力してください:");
    return 0;
}


int kesseki_ui(){
    printf("欠席日数を入力してください:");
    return 0;
}


int tanni_ui(){
    printf("単位数を入力してください:");
    return 0;
}

int jumyou_ui(char kyouka[],double kesseki,double tanni){
    //instorage(kyoka,);
    double nokori_jumyou = jumyou(kyouka,kesseki,tanni);
    printf("現在の欠席可能日数は ” %.1f コマ ” です。\n",nokori_jumyou);
    tannikazu = nokori_jumyou;
    return 0;
}

int kakuninn_ui(char b[],double a){
    char kakunin;
    printf("今日は学校に行きましたか？(y/n):\n");
    scanf(" %c",&kakunin);
    if(kakunin != 'y'){
        tannikazu --;
        instorage(b,1);
    }
    END_ui(tannikazu);
    return 0;
}

int END_ui(double a){
    if(a >= 0){
        printf("You Survive!");
    }else{
        printf("You are Die...");
    }
    return 0;
}