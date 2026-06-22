#ifndef UI_H
#define UI_H

int aisatu_ui();
int kyouka_ui();
int kesseki_ui();
int tanni_ui();
int jumyou_ui(char kyouka[],double kesseki,double tanni);
int kakuninn_ui(char b[],double a);
int END_ui(double a);
extern double tannikazu;//ui.cでjumyou_uiとkakunin_uiで進級が出来るかどうかを判別するかどうかのフラッグとしての変数。


#endif