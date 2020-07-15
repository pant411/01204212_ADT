#include<stdio.h>

int main(){
    int x,y,z,eat,ch;
    char a,b;
    scanf("%d %d %d\n",&x,&y,&z);
    scanf("%c %c",&a,&b);
    eat = x;
    if(a=='Y' || a=='y'){
        eat += y;
        if(b=='Y' || b=='y'){
            ch = eat;
            eat /= z;
            if(ch%z > 0){
                eat += 1;
            }
        }
    }
    else if(a=='N' || a=='n'){
        if(b=='Y' || b=='y'){
            ch = eat;
            eat /= z;
            if(ch%z > 0){
                eat += 1;
            }
        }
    }
    printf("%d",eat);
    return 0;
}
