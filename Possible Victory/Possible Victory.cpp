#include<iostream>
using namespace std;
int main(){
    int r,o,c;
    cin>>r>>o>>c;
    int d=20-o;
    int a=d*6;
    int f=a*6;
    int z=c+f;
    if(z>r){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
