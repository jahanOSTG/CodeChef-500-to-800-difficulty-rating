#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a%b==0){
            cout<<a/b<<endl;
        }else if(a%b!=0){
            cout<<(a/b)+(a%b)<<endl;
        }else{
            cout<<a<<endl;
        }
    }
}
