#include<iostream>
using namespace std;
int main(){
    int h,x,y,t;
    cin>>t;
    for(int i=0;i<t;i++){
     cin>>h>>x>>y;
     int a=h-y;
     if(a==0){
        cout<<1<<endl;
     }else{
        if(a%x != 0){
            cout<<(1+(a/x)+1)<<endl;
        }else{
            cout<<(1+(a/x))<<endl;
        }
    }
  }
}
