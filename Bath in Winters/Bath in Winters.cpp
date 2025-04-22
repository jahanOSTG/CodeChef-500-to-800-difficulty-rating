#include<iostream>
using namespace std;
int main(){
    int t,g,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>g>>b;
        if(g<2*b){
            cout<<"0"<<endl;
        }else if(g>=2*b){
            cout<<g/(2*b)<<endl;

        }

    }

}
