
#include<iostream>
using namespace std;
int main(){
    
    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        if(a==b){
            cout<<"YES"<<endl;
        }else if(a>b){
            int diff1=(a-b);
            if(diff1>d){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }

        }else{
            int diff2=(b-a);
            if(diff2<c){
                    cout<<"YES"<<endl;


            }else{
                cout<<"NO"<<endl;
            }
        }

    }
}
