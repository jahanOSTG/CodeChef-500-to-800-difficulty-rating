#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t,a,b,c,d;
    int sub1,sub2;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        sub1=abs(a-c);
        sub2=abs(b-d);
        cout<<max(sub1,sub2)<<endl;
    }
}
