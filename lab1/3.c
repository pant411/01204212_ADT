#include<stdio.h>

int main(){
    int x,y,total_hour,day,hour=0;
    scanf("%d %d",&x,&y);
    total_hour = x+y;
    day = total_hour/24;
    hour = total_hour%24;
    printf("%d %d",day,hour);
    return 0;
}
