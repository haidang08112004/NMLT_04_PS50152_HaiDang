#include <stdio.h>

int main() {
    char mssv[20];
    char hoten[100];
    int namsinh;
    float diemTB;

    // Nhập thông tin
    printf("Nhap ma so sinh vien: ");
    scanf("%s", mssv);

    getchar(); // Xóa ký tự Enter còn lại

    printf("Nhap ho va ten: ");
    fgets(hoten, sizeof(hoten), stdin);

    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);

    // Xuất thông tin
    printf("\n===== THONG TIN SINH VIEN =====\n");
    printf("MSSV            : %s\n", mssv);
    printf("Ho va ten       : %s", hoten);
    printf("Nam sinh        : %d\n", namsinh);
    printf("Diem trung binh : %.2f\n", diemTB);

    return 0;
}