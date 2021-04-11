/*  Q:某国王大赦囚犯，让以狱吏 n 次通过一排锁着的 n 间牢房并规定：
**  狱吏每通过一次，就转动一次这排牢房中的某些门锁。门锁每转动一次，
**  原来锁着的就被打开，原来打开的就被锁上。狱吏通过 n 次后，门锁为开的牢房中的犯人被放出，
**  门锁为锁上的牢房中的犯人不得获释。转动门锁的规则如下：狱吏第一次通过牢房，要转动每一把门锁，
**  即全部锁打开；第二次通过牢房时，从第二间开始转动，每隔一间转动一次；第 k 次通过牢房时，
**  从第 k 间开始转动，每隔 k-1 间转动一次。问：狱吏通过 n 次后，哪些牢房的锁是打开的？
**  Input:20
**  Output:1 4 9 16
**  @author:xzajyjs
*/

#include <iostream>
using namespace std;
int main(){
    int n,i;
    while(scanf("%d",&n)!=EOF){
        int s = 1;
        for(i = 3;s <= n;i+=2){
            cout << s << " ";
            if(s+i > n)break;
            else    s+=i;
        }
        cout << endl;
    }
    return 0;
}