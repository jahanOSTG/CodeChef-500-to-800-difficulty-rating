
#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
       int total=b+c;
       if((a-total)>=d){
        cout<<0<<endl;
       }else if((a-total)<d){
           if(((a-b)>=d) || ((a-c)>=d)){
              cout<<1<<endl;
              }else{
                     cout<<2<<endl;
              }

           }
       }


    }

