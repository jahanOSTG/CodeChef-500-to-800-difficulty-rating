#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b;
    int pizza;
    int slices;
    for(int i=0; i<t; i++){
            cin>>a>>b;
             slices=a*b;
            if(slices%4==0){
                pizza=slices/4;
            }else{
                pizza=(slices/4)+1;
            }

        cout<<pizza<<endl;
    }

}

