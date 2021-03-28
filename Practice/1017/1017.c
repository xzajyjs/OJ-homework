/*
多组输入，每组输入包含 44 个正整数 a, b, c, d (0 <a,b,c,d<1000)，依次代表第一个数的分子，
第一个数的分母，第二个数的分子，第二个数的分母
对于每组数据，输出的两个分数的和的最简分数形式。（如果分子是分母的倍数，则输出形式为 n/1 ）
输入样例：
1 2 1 2
1 4 1 2
输出：
1/1
3/4
*/
#include<stdio.h>
int Max(int x,int y){
	int answer;
	answer = x > y ? x:y;
	return answer;
}
int Min(int x,int y){
	int answer;
	answer = x<y?x:y;
	return answer;
}
int MinB(int x,int y){
	int i = Max(x,y);
	while(i%x!=0 || i%y!=0){
		i++;
	}
	return i;
}
int MaxY(int x,int y){
	int i = Min(x,y);
	while(x%i!=0 || y%i!=0){
		i--;
	}
	return i;
}
int main(){
	int a,b,c,d;
	int minb,maxy;
	while(scanf("%d",&a)!=EOF){
		scanf("%d %d %d",&b,&c,&d);
		//printf("%d %d %d %d\n",a,b,c,d);
		minb = MinB(b,d);
		//printf("minb = %d\n",minb);
		a *= (minb / b);
		c *= (minb / d);
		maxy = MaxY(a+c,minb);
		printf("%d/%d\n",(a+c)/maxy,minb/maxy);
	}
	return 0;
}