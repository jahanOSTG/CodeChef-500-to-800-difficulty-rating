#include<iostream>
using namespace std;
int sum(int a,int b,int c){
    if(a<=b && a<=c){
        return b+c;
    }
    else if(b<=a && b<=c){
        return a+c;
    }else{
        return a+b;

    }
}
int main(){
    int t,a1,a2,a3,b1,b2,b3;
    cin>>t;
    for(int i=0; i<t; i++){
            cin>>a1>>a2>>a3>>b1>>b2>>b3;
       int alice=sum(a1,a2,a3);
       int bob=sum(b1,b2,b2);
    if(alice>bob){
        cout<<"Alice"<<endl;
    }else if(alice==bob){
        cout<<"Tie"<<endl;

    }else{
        cout<<"Bob"<<endl;

    }


    }
    

}

