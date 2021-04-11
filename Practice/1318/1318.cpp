/*  Q:有一长度为 N (1<=Ｎ<=10) 的地板，给定两种不同瓷砖：一种长度为 1，另一种长度为 2，数目不限。
**  要将这个长度为 N 的地板铺满，一共有多少种不同的铺法？
**  Input:  3
            4
**  Output: 3
            5
**  @author:xzajyjs
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