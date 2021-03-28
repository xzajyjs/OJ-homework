#include<stdio.h>
//假设 2012 年 1 月 1 日是星期日，请求出 n 天后是星期几
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int day = 0;
		switch(n % 7){
		case 0:
			day = 7;break;
		case 1:
			day = 1;break;
		case 2:
			day = 2;break;
		case 3:
			day = 3;break;
		case 4:
			day = 4;break;
		case 5:
			day = 5;break;
		case 6:
			day = 6;break;
		}
		printf("%d\n",day);
	}
	return 0;
}