#include<iostream>
using namespace std;
int main(){
    int t;
    int x;
    cin>>t;
    for(int i=0; i<t; i++){
            cin>>x;
        if(x%4==0){
            cout<<"GOOD"<<endl;
        }else{
            cout<<"NOT GOOD"<<endl;

        }
    }
}
