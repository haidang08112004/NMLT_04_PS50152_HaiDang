#include <stdio.h>  
int main() {
    int toan, ly, hoa;
    float diem;
    printf("Nhap diem toan: \n");
    scanf("%d", &toan);
    printf("Nhap diem ly: \n");
    scanf("%d", &ly);
    printf("Nhap diem hoa: \n");
    scanf("%d", &hoa);
    diem = (toan*3.0 + ly*2.0 + hoa) / 6.0;
    printf("Diem trung binh: %.2f\n", diem);
    return 0;       
}