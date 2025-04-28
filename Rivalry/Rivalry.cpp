#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    int p=a+c;
    int q=b+d;
    if(p>q){
        cout<<"Dominater"<<endl;
    }else{
        cout<<"Everule"<<endl;
    }
}
