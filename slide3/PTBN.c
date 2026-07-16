#include <stdio.h>
int main() {
    int a,b;
    float x;
    printf("Nhap vao he so a: ");
    scanf("%d", &a);    
    printf("Nhap vao he so b: ");
    scanf("%d", &b);        
    if(a==0) {
        printf("Phuong trinh vo nghiem\n");
    }
else {
    x=-(float)b/a;
    printf("Phuong trinh %dx + %d = 0 co nghiem x = %.2f", a, b, x);
}

return 0;   
}