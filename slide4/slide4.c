#include <stdio.h>
int main () {
    int n,s;
    for (int i=1; i<=100; i++){
        if(i%4==0)
        printf("%d\t",i);
    }
    printf("\n");
    n=3; 
    s=0;    
    for (int i=1;i<=n;i++){
        s= s+(2*i+1);
        printf("%d\t%d\t%d",i,2*i+1,s);
    }
    n = 9;
    for(int i=n;i<=10,i++){
    }
    return 0;
}