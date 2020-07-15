#include<stdio.h>

int main(){
    long ts,day,hour,minute,second1,second2,secondFi;
    scanf("%ld",&ts);
    day = ts/(24*60*60);
    second1 = ts%(24*60*60);
    hour = second1/(60*60);
    second2 = second1%(60*60);
    minute = second2/60;
    secondFi = second2%60;
    printf("%ld %ld %ld %ld",day,hour,minute,secondFi);
    return 0;
}
