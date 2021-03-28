//计算一句话单词个数（单词间可有多个空格,开头不可有）
//输入样例:How are you     doing?
//输出样例：4
#include<stdio.h>
#include<string.h>
int main(){
	char sen[1002];
	int i;
	//while(1){
		int num = 0;
		gets(sen);
		for(i = 0;i < strlen(sen);i++){
			if(sen[i] == ' ')
				for(;i < strlen(sen);i++){
					if(sen[i]!=' '){
						num++;
						break;
					}
				}
		}
		printf("%d\n",num+1);
	//}
		return 0;
}