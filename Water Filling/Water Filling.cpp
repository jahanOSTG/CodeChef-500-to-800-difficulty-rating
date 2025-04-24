#include<iostream>
using namespace std;
int main(){
    int t,b1,b2,b3;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>b1>>b2>>b3;
        int count=0;
        if(b1==0){
            count++;
        }if(b2==0){
            count++;
        }if(b3==0){
            count++;
        }

        if(count>=2){
            cout<<"Water filling time"<<endl;
        }else{
            cout<<"Not now"<<endl;
        }

    }
}
