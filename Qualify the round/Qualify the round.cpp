
#include<iostream>
using namespace std;
int main(){
    int t,c,a,b;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b>>c;
        if(a <= (b*1+c*2)){
            cout<<"Qualify"<<endl;
        }else{
            cout<<"NotQualify"<<endl;
        }

    }
}
