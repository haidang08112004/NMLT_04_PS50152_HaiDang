#include <stdio.h>
int main(){
    struct Phanso
    {
        int tu;
        int mau;
    };
    struct Phanso ps1,ps2,tongPS,hieuPS,tichPS,thuongPS;
    // nhap ps
    printf("Nhap phan so thu nhat:\n");
    printf("Tu:");
    scanf("%d",&ps1.tu);
    printf("Mau:");
    scanf("%d",&ps1.mau);

    printf("Nhap phan so thu hai:\n");
    printf("Tu:");
    scanf("%d",&ps1.tu);
    printf("Mau:");
    scanf("%d",&ps1.mau);
    // mau chung 
    tongPS.tu = ps1.tu*ps2.mau+ps2.tu*ps1.mau;
    tongPS.mau = ps1.mau*ps2.mau;


    return 0;
    
}