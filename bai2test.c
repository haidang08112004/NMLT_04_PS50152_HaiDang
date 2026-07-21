#include <stdio.h>
int main () {
    float diemtb;
    int toan, ly, hoa;
    printf("nhap toan,ly,hoa:\n");
    scanf("%d%d%d" ,&toan,&ly,&hoa1);
    diemtb = (toan*3 + ly*2 + hoa)/6;
    printf("diem trung binh :%.2f",diemtb);
    return 0;
}