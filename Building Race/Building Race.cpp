#include<iostream>
using namespace std;
int main(){
    int t;
    float a,b,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>x>>y;
        float c=a/x;
        float d=b/y;
        if(d==c){
            cout<<"BOTH"<<endl;
        }else if(c>d){
            cout<<"CHEFINA"<<endl;
        }else{
            cout<<"CHEF"<<endl;

        }
    }
}
