#include<stdio.h>

int main(){
    long m,n,side1,side2,hypo;
    scanf("%ld %ld",&m,&n);
    if(m>n && m<=50000){
        side1 = m*m-n*n;
        side2 = 2*m*n;
        hypo = m*m+n*n;
        printf("%ld %ld %ld",side1,side2,hypo);
    }
    return 0;
}
