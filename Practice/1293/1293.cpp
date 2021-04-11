/*  Q:小明刚放学回家，老妈就吩咐他：马上有客人要来，赶快把苹果洗了放到盘子里去。
**  小明要把 m 个同样的苹果放到 n 个同样的盘子里，允许有的盘子空着不放，有多少种不同的 分法。5,1,1 与 1,5,1 是同一种放法。
**  多组输入，输入两个数 m 和 n 代表苹果数和盘子数
**  Input:7 3
**  Output:8
**  @author:xzajyjs
*/
#include <iostream>
using namespace std;
int ks(int m,int n){
	if(n < 1 || m < 0)return 0;
	if(n < 2 || m < 2)return 1;
	return ks(m,n-1)+ks(m-n,n);
}
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
		cout << ks(m,n) << endl;
	return 0;
}