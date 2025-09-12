#include<iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>x;
        if(x>=1 && x<=10){
                cout<<"Lower Double"<<endl;

        }else if(x >= 11 && x <= 15){
             cout<<"Lower Single"<<endl;


        }else if(x>=16 && x<=25){
            cout<<"Upper Double"<<endl;
        }else{
             cout<<"Upper Single"<<endl;

        }
    }
    return 0;
}

