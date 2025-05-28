#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        if(a%10==0){
            cout<<(a/10)<<endl;
        }else{
            cout<<(a/10)+1<<endl;
        }
    }

    return 0;
}
