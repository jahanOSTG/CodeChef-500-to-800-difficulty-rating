#include<iostream>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if((x*y)<=z){
            cout<<0<<endl;
            }
            else{
                cout<<(x*y - z + y - 1)/y<<endl;
            }
        }

    }

