
#include<iostream>
using namespace std;
int main(){
    int a,b,t;

    float avg,c;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b>>c;
        avg=(a+b)/2.00;
        if(avg>c){
            cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;

    }

  }
}
