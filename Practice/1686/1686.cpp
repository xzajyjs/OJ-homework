/*  Q:设有 n 条封闭曲线画在平面上，而任何两条封闭曲线恰好相交于两点，
**  且任何三条封闭曲线不相交于同一点，求这些封闭曲线把平面分割成的区域个数。
**  Input:10
**  Output:92
**  @author:xzajyjs
*/

//算法：计算公共区域块数（曲线个数-1的平方）加曲线条数加1

#include <iostream>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        cout << n*n-n+2 << endl;
    }
    return 0;
}