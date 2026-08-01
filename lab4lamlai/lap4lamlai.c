#include <stdio.h>
int main () {
    int choice;
    do {
        printf("\n");
        printf("+-------------------------------+\n");
        printf("|    MENU CHUONG TRINH LAB 4    |\n");
        printf("+-------------------------------+\n");
        printf("1. Tinh trung binh tong cac so chia het cho 2 \n");
        printf("2. Kiem tra So nguyen to \n");
        printf("3. Kiem tra So chinh phuong \n");
        printf("4. Thoat chuong trinh \n");
        printf("Xin moi chon chuc nang(1-4): ");
        scanf("%d", &choice);
        printf("\n");
        
        switch(choice) {
            case 1:
                int min; 
                int max;
                float trungBinh;
                int sum;
                int count;
                printf("Nhap vao 2 gia tri min va max:");
                scanf("%d %d",&min,&max);
                if (min>max) {
                    int tam=min;
                    min=max;
                    max=tam;
                }
                for(int i=min; i<=max;i++){
                    if(i%2==0){
                        sum=sum+i;
                        count++;
                    }
                }
                if(count==0){
                    printf("khong co so");
                }
                trungBinh=(float)sum/count;
                printf("tong cac so chia het cho 2 tu %d den %d: %.2f",min,max,trungBinh);
            break;
            case 2:
            int x;
            
        }
    }while(choice != 4);
}
        

