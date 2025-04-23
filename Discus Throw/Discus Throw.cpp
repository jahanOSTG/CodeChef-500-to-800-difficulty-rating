#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b>>c;
        if(a>=b && a>=c){
            cout<<a<<endl;
        }else if(b>=a && b>=c){
            cout<<b<<endl;
        }else if(c>=a && c>=b){
            cout<<c<<endl;
        }else if(a==b && b==c){
            cout<<a<<endl;
        }
    }
}
