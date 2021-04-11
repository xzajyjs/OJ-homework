/* Q:6 × 9 = 42 对于十进制来说是错误的，但是对于 13 进制来说是正确的。
**   即，6 (13) × 9 (13) = 42 (13)， 而 42 (13) = 4 × 13 + 2 = 54 (10)。
**   你的任务是写一段程序读入三个整数 p, q 和 r，然后确定一个进制 B (2 <= B <= 16) 使得 p × q = r。
**   如果 B 有很多选择，输出最小的一个。
**   例如：当 p = 11, q = 11, r = 121 时，则有 11 (3) × 11 (3) = 121 (3)。
**   因为 11 (3) = 1 × 31 + 1 × 30 = 4 (10) 且 121 (3) = 1 × 32 + 2 × 31 + 1 × 30 = 16 (10)。
**   对于进制 10，有 11 (10) × 11 (10) = 121 (10)。这种情况下，应该输出 3。如果没有合适的进制，则输出 0。
**input:    3
            6 9 42
            11 11 121
            2 2 2

**output:   13
            3
            0
**@author:xzajyjs
*/

//a * b = c,确定进制， 不存在输出0
#include <iostream>
#include <cmath>
using namespace std;
int Change(int N,int x);
int main(){
    int T,i;
    int a,b,c;
    int N;                  //进制（2-16）
    int S;                  //c转化为十进制数
    int choose,n;

    //测试Change函数
    //scanf("%d%d",&n,&choose);
    //cout << Change(n,choose) << endl;
    //printf("函数测试完毕!\n");

    scanf("%d",&T);
    for(i = 0;i < T;i++){
        scanf("%d%d%d",&a,&b,&c);
        for(N = 2;N <=16;N++){
            if(Change(N,c) == Change(N,a) * Change(N,b)){
                cout << N <<endl;
                break;
            }
        }
        if(N > 16)cout << 0 << endl;
    }
    return 0;
}
//N进制的x转化为十进制
int Change(int N,int x){
    int s = 0;
    int i;
    for(i = 0;x!=0;i++){
        if(N == 2 && x%10 >=2)return 2;    //判断二进制
        s+=((x%10) * pow(N,i));
        x /= 10;
    }
    //if(x == 0)
    return s;
}