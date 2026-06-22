#include "logic.h"
#include <stdio.h>

double allkake;//欠席の総数

double jumyou(char a[],double b,double c){
    double stkake;//既に欠席した回数

    stkake=outstorage(a);//データベースから教科名を使い検索をする関数

    instorage(a,b);

    allkake = c * (stkake + b);//失った単位時間

    return (3.5*c) -allkake;//可能欠席数(3.5*単位数)-現在の総欠席数
}