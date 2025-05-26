#include<iostream>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>x;
        int c=n/6;
        if(n%6==0){
            cout<<c*x<<endl;
        }else{
            cout<<c*x+x<<endl;
        }
    }
}
