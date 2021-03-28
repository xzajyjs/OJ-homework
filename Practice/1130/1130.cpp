/*question:给定两个字符串 s 和 t，请判断 s 是否是 t 的子序列,Yes or No.
* input:sequence subsequence
* output:Yes
* @author xzajyjs
* emaill: xuziang16@gmail.com
*/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[100002],t[100002];
    int i,j,k,flag = 0;                 //k为i的暂存量
    while(~scanf("%s%s",s,t)){
        for(i = 0;i <= strlen(t)-strlen(s);i++){
            //寻找第一个相等的字符
            if(t[i] == s[0]){
                k = i;
            //从s[0]开始逐一字符判断
                for(j = 0;j < strlen(s);j++,k++){
                    //cout << "s[" << j << "]="<<s[j]<<",";
                    //cout << "t[" << k << "]="<<t[k]<<",";
                    if(s[j] == t[k])flag++;
                    //cout << "flag = "<<flag<<endl;
                }
                //cout << "strlen(s) = "<<strlen(s)<<endl;
            }
            if(flag == strlen(s)){
                printf("Yes\n");
                flag = 0;
                break;
            }
            else flag = 0;
        }
        if(i > strlen(t) - strlen(s)){printf("No\n");flag = 0;}
    }
    return 0;
}

/*
#include<stdio.h>
int main(){
	char s[100002],t[100002];
	int i,j;
	while(~scanf("%s%s",s,t)){
		i=j=0;
		while(s[i]){
			if(!t[j]){
				printf("No\n");
				break;
			}
			if(s[i]==t[j++])
				i++;
		}
		if(!s[i])
			printf("Yes\n");
	}
	return 0;
}
*/