#include <stdio.h>
int main (){
    int toan,ly,hoa;
    float dtb, diem;
    printf("nhap toan,ly,hoa");
    scanf("%d%d%d",&toan,&ly,&hoa);
    dtb=(float)(toan+ly+hoa)/3;
    printf("diem trung binh:%.2f",dtb);
    if(diem>=8.5)
        printf("gioi");
    else if(diem>=6.5)
        printf("kha");
    else if(diem >=5)
        printf("trung binh");
}