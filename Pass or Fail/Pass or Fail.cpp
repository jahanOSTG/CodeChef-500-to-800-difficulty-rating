#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        int d=a-b;
        int s1=(b*3)+(d*-1);
        if(s1<c){
            cout<<"Fail"<<endl;
        }else{
            cout<<"Pass"<<endl;
        }

    }
}
