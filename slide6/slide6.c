#include <stdio.h>
int main (){ 
    int n=50;
    int A[n];
    for(int i=0;i<n;i++){
        printf("Nhap A[%d]= ",i);
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        printf("PT[%d]=%d\n",i+1,A[i]);
    }  
    for(int i = 0;i<n;i++){
        if(A[i]%2!=0)
            A[i]++;
    }
    int d=3,c=4;
    int B[d][c];
    for(int i=0;i<d;i++){
        for(int j=0;j<c;j++){
            printf("B[%d,%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<d;i++){
        for(int j=0;j<c;j++){
            printf("B[%2d,%2d]=%3d\t",i,j,B[i][j]);
        }
        printf("\n");
    }
    return 0;
}