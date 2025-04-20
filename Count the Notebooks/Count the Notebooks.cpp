#include<iostream>
using namespace std;
int main(){
    int t,x,y,notebook;
    cin>>t;
    for(int i=0; i<t;i++){
        cin>> x;
        y=x*1000;
        notebook=(y/100);
        cout<<notebook<<endl;
    }
}

