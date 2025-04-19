#include<iostream>
using namespace std;
int main(){
    int t,n,x;
    int pack;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>x;
        int needCandies= n-x;
        if(n<=x){
            cout<<"0";
        }else{
            pack=(needCandies+3)/4;
            cout<<pack<<endl;


    }
    }
}
