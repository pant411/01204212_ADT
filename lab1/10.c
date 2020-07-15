#include<stdio.h>

int main(){
    int x,y;
    char op;
    scanf("%d %c %d",&x,&op,&y);
    if(op=='+'){
        printf("%d",x+y);
    }
    else if(op=='-'){
        printf("%d",x-y);
    }
    else if(op=='*'){
        printf("%d",x*y);
    }
    else if(op=='/'){
        double res;
        res = x/(float)y;
        printf("%.2lf",res);
    }
    else if(op=='%'){
        printf("%d",x%y);
    }
    else{
        printf("Unknown Operator");
    }
    return 0;
}
