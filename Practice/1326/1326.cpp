/*  Q:有理数的分数表示方法简洁清晰。计算时，我们通常需要利用有理数的小数形式。
**  现在给定一个分数式和有理数的小数点后的位数，请计算出这个分数的数值
**  Input:11/19 20
**  Ouput:0.57894736842105263157
**  @author:xzajyjs
*/
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	while(~scanf("%d/%d%d",&a,&b,&c)){
		cout << a/b << ".";
		a%=b;
		while(c-- && a){
			a *= 10;
			printf("%d",a/b);
			//cout << a/b;
			a %= b;
		}
		cout << endl;
	}
	return 0;
}