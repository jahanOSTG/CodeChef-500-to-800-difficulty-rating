#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    int second;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
         if ((a > b && a < c) || (a < b && a > c))
            second = a;
        else if ((b > a && b < c) || (b < a && b > c))
            second = b;
        else
            second = c;

        cout << second << endl;
    }
}
