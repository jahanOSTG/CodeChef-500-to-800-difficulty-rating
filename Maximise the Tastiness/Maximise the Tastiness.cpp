#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,a,b,c,d,sum;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b>>c>>d;
        int e=max(a,b);
        int f=max(c,d);
        sum=e+f;
        cout<<sum<<endl;
    }

}
