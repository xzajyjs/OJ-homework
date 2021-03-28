//给定一个质数 n (5 < n < 1000)n(5<n<1000)，
//求出小于 n 的所有质数的和

#include <stdio.h>
int i;
int WHETHER(int n){               //判断质数还是合数
    for(i = 2;i < n/2;i++){
      if(n % 2 == 0)break;
    }
    if(i < n /2)return 1;          //合数
    else return 2;                //质数
}
int main(){
    int n;
    int sum = 0;
    while(scanf("%d",&n) != EOF){
        for(i = 2;i < n;i++){
            if(WHETHER(i) == 2)sum+=i;
        }
        printf("%d",sum);
    }
    return 0;
}
