#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        int c=(a*100)/10;
        int d=(b*100)/20;
        if(c==d){
            cout<<"ANY"<<endl;
        }else if(c<d){
            cout<<"SECOND"<<endl;
        }else{
            cout<<"FIRST"<<endl;
        }
    }
}
