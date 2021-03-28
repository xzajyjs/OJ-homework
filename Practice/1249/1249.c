/*
多组输入，其中每组输入的第一行表示参加国家数 n（占一行），
下面 n 行是国家的报名信息（序号、国家名称、参加人数、所属大洲）
按国家名字的字母序输出信息（东道主国家名字最后输出）。

输入样例：
5
1 France 123 Europe
2 Russia 254 Europe
3 Japan 235 Asia
4 Germany 185 Europe
5 China 560 Asia
输出样例：
1 France 123 Europe
4 Germany 185 Europe
3 Japan 235 Asia
2 Russia 254 Europe
5 China 560 Asia

考察内容：结构体
*/


#include <stdio.h>
#include <string.h>
typedef struct _info{
    int num;
    char name[100];
    int num_human;
    char where[100];
}Info;
int main(){
    int k;                  //结构体数组长度（国家个数）
    int i,j;
    int flag = 0;               //用于记录China的位置
    Info infomation[3000],temp;
    while(scanf("%d",&k)!=EOF){
        //实现国家信息录入
        for(i = 0;i < k;i++){
            scanf("%d %s %d %s",&infomation[i].num,infomation[i].name,&infomation[i].num_human,infomation[i].where);
        }
        //对name[0]由小到大的顺序排序并存放至later结构体
        for(i = 0;i < k-1;i++){
            for(j = i+1;j < k;j++)
                if(strcmp(infomation[i].name,infomation[j].name)>0){
                    temp = infomation[i];
                    infomation[i] = infomation[j];
                    infomation[j] = temp;
                }
        }
        for(i = 0;i < k;i++){
            if(strcmp(infomation[i].name,"China") == 0){
                flag = i;
                continue;
            }
            printf("%d %s %d %s\n",infomation[i].num,infomation[i].name,infomation[i].num_human,infomation[i].where);
        }
        if(strcmp(infomation[flag].name,"China") == 0){
            printf("%d %s %d %s\n",infomation[flag].num,infomation[flag].name,infomation[flag].num_human,infomation[flag].where);
        }
    }
    return 0;
}
