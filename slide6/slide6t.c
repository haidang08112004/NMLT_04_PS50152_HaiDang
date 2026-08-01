#include <stdio.h>
#define n 5
int main(){
    //int n = 5
    int B[n]; //={9,6,5,7,8}; //diem
    int C[n][n]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    //xuat mang 2 chieu
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // if(i==j || (i+j)==(n-1)){
            if(i==0 || i==(n-1) || j==0 || j==(n-1)){
            printf("C[%d,%d]=%d\t",i,j,C[i][j]);
        }else{
        printf("         \t");
        }
    }
}
    // // nhap mang
    printf("Nhap cac phan tu cua mang B:\n");
    for(int i=0;i<5;i++){
        printf("Nhap B[%d]=",i);
        scanf("%d",&B[i]);
    }
    // xuat mang
    printf("\nXuat mang B moi nhap\n");
    for(int i=0;i<5;i++){
        printf("B[%d]=%d\t",i,B[i]);
    }
    // n = 5
    // 0 1 2 3 4
    // 6 4 8 7 9
    // xoa so 4 tai vi tri B[1]
    // 6 8 7 9 // gan lai size = 4
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(B[j]<B[i]){
                int temp = B[i];
                B[i]= B[j];
                B[j]= temp;
            }

        }
       
    }
    // xuat mang
    printf("\nXuat mang B moi nhap\n");
    for(int i=0;i<5;i++){
        printf("B[%d]=%d\t",i,B[i]);
    }
     return 0;
}