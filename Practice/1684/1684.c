/*
古希腊数学家毕达哥拉斯在自然数研究中发现，220 的所有真约数 (即不是自身的约数) 之和为
： 1+2+4+5+10+11+20+22+44+55+110＝284。 而 284 的所有真约数为 1、2、4、71、 142，
加起来恰好为 220。人们对这样的数感到很惊奇，并称之为亲和数。一般地讲，如果两个数中任何一个数都是
另一个数的真约数之和，则这两个数就是亲和数。你的任务就编写一个程序，判断给定的两个数是否是亲和数。

输入数据第一行包含一个数 M，接下有 M 行，每行一个实例，包含两个整数 A,B； 
其中 0 <= A,B <= 600000 ;
对于每个测试实例，如果 A 和 B 是亲和数的话输出 Yes，否则输出 No。

输入样例：
2
220 284
100 200

输出样例：
Yes
No
*/
#include<stdio.h>
#include<string.h>
void result(int x,int y);
//判断是否为约数(x是y的约数？1为约数，0为不是)
int Yue(int x,int y){
	int answer;
	answer = (y % x == 0)?1:0;
    return answer;
}
int main(){
	int times = 0,input_times;
    scanf("%d",&input_times);
	while(input_times > times){
		int a,b;
		scanf("%d %d",&a,&b);
		result(a,b);
		times++;
	}
	return 0;
}
//计算结果
void result(int x,int y){
	int i,j = 0;
    int sum_x = 0,sum_y = 0;
	int Seprate_x[100000],Seprate_y[100000];
    int len_x,len_y;
	//将x，y的所有约数分别放入Seprate_x/_y
	for(i = 1;i <= x/2;i++){
		if(Yue(i,x) == 1){
			Seprate_x[j] = i;
			j++;
		}
        len_x = j;
	}
	j = 0;
	for(i = 1;i <= y/2;i++){
		if(Yue(i,y) == 1){
			Seprate_y[j] = i;
			j++;
		}
        len_y = j;
	}
    //计算x和y的所有约数和
    for(i = 0;i < len_x;i++){
        sum_x += Seprate_x[i];
    }
    for(i = 0;i < len_y;i++){
        sum_y += Seprate_y[i];
    }
    //判断
    if(sum_x == y && sum_y == x)
        printf("Yes\n");
    else 
        printf("No\n");
}