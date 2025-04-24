
#include<iostream>
using namespace std;

int main() {
    int t,a,b,c,d;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b>>c>>d;
        if(a>(b+c+d) || b>(a+d+c) || c>(a+b+d) || d>(a+b+c)){
            cout<<"YES"<<endl;
        }else{
             cout<<"NO"<<endl;
        }
    }
}
