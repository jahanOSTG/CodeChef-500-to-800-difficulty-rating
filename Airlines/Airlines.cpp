#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>a>>b;
    c=a*100;
    if(c>b){
        cout<<0<<endl;
    }else{
        d=b-c;
        if(d%100==0){
            cout<<d/100<<endl;
        }else{
            cout<<(d/100)+1<<endl;
        }
    }
  }

}
