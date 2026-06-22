#include "logic.h"
#include <stdio.h>

double allkake;//欠席の総数

double jumyou(char a[],double b,double c){
    double stkake;//既に欠席した回数

    stkake=outstorage(a);//データベースから教科名を使い検索をする関数。無ければ0.0

    instorage(a,b);//csvに書き込みをする関数
    //aが教科名でbが欠席数。現在の数に足される形で実装

    allkake = stkake + b;//欠席の数合計

    double kanou_kesseki;//欠席可能な数

    kanou_kesseki = (3.5 * c) - allkake;

    return kanou_kesseki;//可能欠席数(3.5*単位数)-現在の総欠席数
}