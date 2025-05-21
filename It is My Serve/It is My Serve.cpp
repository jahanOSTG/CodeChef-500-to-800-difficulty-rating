
#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        int num=(a+b)/2;
        if (num%2==0){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
}
