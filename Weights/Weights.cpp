
#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        if(a==b || a==c || a==d ){
            cout<<"YES"<<endl;
        }else if((a==(b+c)) || (a==(c+d)) || (a==(b+d)) || (a==(b+c+d))){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
}
