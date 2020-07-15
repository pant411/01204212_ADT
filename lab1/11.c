#include<stdio.h>

int main(){
    int dd,mm,yy,res,feb=28;
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if((yy%4==0 && yy%100!=0) || (yy%400==0)){
        feb = 29;
    }
    res = dd;
    switch(mm){
        case 2: res += 31; break;
        case 3: res += 31+feb; break;
        case 4: res += 31+feb+31; break;
        case 5: res += 31+feb+31+30; break;
        case 6: res += 31+feb+31+30+31; break;
        case 7: res += 31+feb+31+30+31+30; break;
        case 8: res += 31+feb+31+30+31+30+31; break;
        case 9: res += 31+feb+31+30+31+30+31+31; break;
        case 10:res += 31+feb+31+30+31+30+31+31+30; break;
        case 11:res += 31+feb+31+30+31+30+31+31+30+31; break;
        case 12:res += 31+feb+31+30+31+30+31+31+30+31+30; break;
    }
    printf("%d",res);
}
