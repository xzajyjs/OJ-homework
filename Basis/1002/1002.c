/*给定两个整数 a, b (均不超过 int 类型的表示范围)，
求出 a + b
多组输入，每组输入为一行，里面有 2 个数 a, b。
*/
#include <stdio.h>
int main(){
  int a,b;
  while(scanf("%d %d",&a,&b) != EOF){
    printf("%d\n",a+b);
  }
  return 0;
}
