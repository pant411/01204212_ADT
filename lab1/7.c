#include<stdio.h>

int main(){
    int Lo,Ln,c,n,b;
    scanf("%d %d %d %d",&Ln,&Lo,&c,&n);
    b = c*1000/(n*(Lo-Ln));
    if(c*1000%(n*(Lo-Ln)) != 0){
        b = b + 1;
    }
    printf("%d",b);
    return 0;
}
