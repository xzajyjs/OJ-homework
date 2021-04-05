/*Q:已知 2007 年 10 月 10 日，请求出 n 天后是几月几号
**input:2
**output:2007-10-12
**@author:xzajyjs
*/
#include <iostream>
using namespace std;
int main(){
	int in;
	
	while(scanf("%d",&in)!=EOF){
		int year = 2007,month = 10,day = 10;
		for(;in > 0;in--){
			day++;
			switch(month){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(day == 32){
					month++;
					day = 1;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(day == 31){
					month++;
					day = 1;
				}
				break;
			case 2:
				//闰年
				if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
					if(day == 30){
						month++;
						day = 1;
						break;
					}
				}
				//非闰年
				else
				{
					if(day == 29){
						month++;
						day = 1;
						break;
					}
				}

			}
			if(month == 13){
				year++;
				month = 1;
			}
		}
		printf("%d-%02d-%02d\n",year,month,day);
	}
	return 0;
}