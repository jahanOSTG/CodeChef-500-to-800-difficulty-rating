
#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(b>c){
            cout<<0<<endl;
        }else if(b<c){
            if((c/b)<=a){
                cout<<c/b<<endl;
            }else{
                cout<<a<<endl;
            }
        }


       }


    }

