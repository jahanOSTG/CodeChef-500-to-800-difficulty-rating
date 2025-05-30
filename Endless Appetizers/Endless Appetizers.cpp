#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        int d=c/30;
        int e=d+a;
        if(e%b==0){
            cout<<(e/b)<<endl;
        }else{
            cout<<(e/b)+1<<endl;
        }
    }
}
