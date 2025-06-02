#include<iostream>
using namespace std;
int main(){
    int t,a,b,k;
    int x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>k;
        if(a==b){
            cout<<0<<endl;
        }
            else if(a>b){
                    x=(b-a);
                    if(x%k==0){
                        cout<<abs(x/k)<<endl;
                    }else{
                        cout<<abs(x/k)+1<<endl;
                    }


            }else if(a<b){
                y=(b-a);
                    if(y%k==0){
                        cout<<abs(y/k)<<endl;
                    }else{
                        cout<<(y/k)+1<<endl;
                    }

            }
        }
    }


