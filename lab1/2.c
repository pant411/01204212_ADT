#include<stdio.h>

int main(){
    int l,w;
    double use,area,rate=2;
    printf("length(m.): ");
    scanf("%d",&l);
    printf("width(m.): ");
    scanf("%d",&w);
    area = (l*3.28084)*(w*3.28084);
    use = area/rate;
    printf("Use %.5lf seconds.",use);
    return 0;
}
