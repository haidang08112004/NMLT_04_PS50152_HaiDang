#include <stdio.h> 

int main() {
    int n = 3;
    
    // char maSV2[8];
    // char tenSV2[30];
    // float diemSV2;
    
    // char dsMaSV[40][8];
    // char dstenSV[40][30];
    // float dsDiemSV[40];
    
    // Sap xep ds sinh vien theo diem => thay doi vi tri cua dsMaSV, dstenSV
    struct SinhVien
    {
        char maSV[8];
        char tenSV[30];
        float diemSV;
    } sv1, sv2; // Dấu chấm phẩy kết thúc struct ở đây bắt buộc phải có

    // struct SinhVien sv3;
    struct SinhVien dsSinhVien[40];
    
    // nhap du lieu
    for(int i = 0; i < 3; i++){
        printf("Nhap ma sv[%d]:", i);
        gets(dsSinhVien[i].maSV);
        
        printf("Nhap ten sv[%d]:", i);
        gets(dsSinhVien[i].tenSV);
        
        printf("Nhap ma sv[%d]:", i);
        scanf("%f", &dsSinhVien[i].diemSV); // 7.5 enter
        
        getchar();
    }
    
    printf("Xuat danh sach sinh vien:\n");
    printf("STT Ma sinh vien     Ten sinh vien          Diem sinh vien\n");
    
    for(int i = 0; i < n; i++){
        printf("%-5d %-15s %-25s %.2f\n", i + 1, dsSinhVien[i].maSV, dsSinhVien[i].tenSV, dsSinhVien[i].diemSV);
    }
    
    return 0;
} // Dấu đóng ngoặc nhọn này cực kỳ quan trọng để kết thúc hàm main()