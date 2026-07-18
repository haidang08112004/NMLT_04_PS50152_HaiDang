#include <stdio.h>  
int main() {
    int a,b;
    float x;
    printf("nhap vao he so a,b:\n ");
    scanf("%d %d",&a,&b);
    x=-(float)b/a;
    printf("Phuong trinh %dx + %d = 0 co nghiem x = %.2f",a,b,x);
    return 0;  
} 