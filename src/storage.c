#include "logic.h"
#include "ui.h"
#include <stdio.h>
#include <string.h>

double outstorage(char name[]){
    FILE *fp = fopen("data.csv", "r");
    char csv_kyouka[100];
    double csv_val;
    double found_val = 0.0;
    while (fscanf(fp, "%[^,],%lf\n", csv_kyouka, &csv_val) == 2) {
        if (strcmp(name, csv_kyouka) == 0) {
            found_val = csv_val; // 一致する教科があれば、その数値を保存
            break;               // 見つかったのでループを抜ける
        }
    }

    fclose(fp); // 開いたファイルを必ず閉じる

    return found_val;
}

int instorage(char a[],double b){
    FILE *fp;
    fp = fopen("data.csv", "r");
    if(fp == NULL){
        fp = fopen("data.csv","w");//ファイルが無ければ作成するよ
        fclose(fp);
    }
    else{
        fclose(fp);
    }

    fp = fopen("data.csv", "r");
    FILE *tmp = fopen("tmp.csv", "w");

    char csv_kyouka[100];
    double csv_val;
    int found = 0;

    if (fp != NULL) {
        while (fscanf(fp, "%[^,],%lf\n", csv_kyouka, &csv_val) == 2){
            if (strcmp(a, csv_kyouka) == 0) {
                csv_val += b;
                found = 1;
            }
            fprintf(tmp, "%s,%.1f\n", csv_kyouka, csv_val);
        }
        fclose(fp);
    }
    if (found == 0) {
        fprintf(tmp, "%s,%.1f\n", a, b);
    }
    fclose(tmp);
    remove("data.csv");
    rename("tmp.csv", "data.csv");
    
    return 0;
}