/*question:如果在连续 3 段单位空间碰到的珠子颜色都不一样，则蝙蝠就会坠落。
**比如经过长度为 3 的悬崖，碰到的珠子先后为 “红黄蓝”，或者 “蓝红黄” 等类似情况就会坠落，
**而如果是 “红黄红” 或者 “红黄黄” 等情况则可以安全到达。现在请问：蝙蝠安然抵达彼岸的方法有多少种？
**@author:xzajyjs
**input:3
**output:21
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	long long a[44],b[44];
	a[1]=3;b[1]=0;
	a[2]=6;b[2]=3;
	for(n=3;n<41;n++){
		a[n]=2*b[n-1]+a[n-1];
		b[n]=a[n-1]+b[n-1];
	}
	while(~scanf("%d",&n))
        cout << a[n] + b[n] <<endl;
	return 0;
}