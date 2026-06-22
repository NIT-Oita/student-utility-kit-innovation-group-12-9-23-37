#include "ui.h"
#include "logic.h"
#include <stdio.h>

int aisatu(){
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

int jumyou_ui(char kyouka[],int kesseki,int tanni){

    printf("現在の欠席可能日数は ” %.f 日 ” です。\n",jumyou(kyouka,tanni,kesseki));
    return 0;
}

int kakuninn(){
    printf("今日は学校に行きましたか？\n");
    return 0;
}

int END_ui(){
    printf("You are Die...");
    return 0;
}