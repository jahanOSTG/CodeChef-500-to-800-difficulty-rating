#include<iostream>
using namespace std;
int main(){
    int t,num;
    cin>>t;
         int count1=0;
        int count2=0;
    for(int i=0;i<t;i++){
        cin>>num;

        if(num%2==0){
            count1++;
        }else{
            count2++;
        }
    }
    if(count1>count2){
        cout<<"READY FOR BATTLE"<<endl;
    }else{
        cout<<"NOT READY"<<endl;
    }
}
