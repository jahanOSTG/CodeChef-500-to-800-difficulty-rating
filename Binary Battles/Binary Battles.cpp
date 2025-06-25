#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,a,b;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        int r=log2(n);
        int total=(a*r + b*(r-1));
        cout<<total<<endl;
    }
}
