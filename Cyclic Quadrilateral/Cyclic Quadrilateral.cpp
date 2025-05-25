#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        if(((a+c)==180) && ((b+d)==180)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
