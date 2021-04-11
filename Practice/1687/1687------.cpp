/* Q:父母为儿子大学四年生活费存了一笔钱，方式是整存零取， 规定儿子每月月底取走下月的生活费 M 元。
** 现在假设银行的年利率是 1.71%，现在计算母亲至少存多少钱？（保留 2 位小数）
** Input:   3000
            2000
** Output:  139089.86
            92726.58
** @author:xzajyjs
*/


//不懂何为整存零取！
#include <iostream>
using namespace std;
//递归3次
double Handf(double Gr,double M);
int main(){
    int i;
    double M,result,_St = 0.0;
    cin >> M;
    result = Handf(_St,M);
    result = Handf(result,M);
    result = Handf(result,M);
    cout << result << endl;
    return 0;
}
double Handf(double Gr,double M){
    Gr += 12.0*M;
    Gr /= 1.0171;
    return Gr;
}