#include<stdio.h>

int main(){
    char a,b;
    int distance;
    scanf("%c %c",&a,&b);
    distance = (int)a-(int)b;
    if(distance < 0){
        distance = -distance;
    }
    printf("%d",distance);
    return 0;
}
