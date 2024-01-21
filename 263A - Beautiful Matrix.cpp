//242738475	Jan/21/2024 19:34UTC+2	a6do.i	263A - Beautiful Matrix	Clang++20 Diagnostics	Accepted	62 ms	0 KB
#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int m[6][6];
   for (int i=1;i<=5;i++){
       for (int j=1;j<=5;j++){
           cin>>m[i][j];
           if (m[i][j]==1){cout<<"\n"<<abs(i-3)+abs(j-3); }
       }
   }
    return 0;
}
