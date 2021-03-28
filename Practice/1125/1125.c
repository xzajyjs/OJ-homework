/*
**question：爬楼梯，一次一级或两级，问n级楼梯多少种爬法？
**
**@author xzajyjs
**email:xuziang16@gmail.com
*/

#include<stdio.h>
int fib01(int n) {
        int total;
        if (n == 1 || n == 2)
            total = n;
        else
            total = fib01(n - 2) + fib01(n - 1);
        return total;
    }
int main(){
    int num;
     while(scanf("%d",&num)!=EOF){
         num = fib01(num);
         printf("%d\n",num);
     }
     return 0;
}