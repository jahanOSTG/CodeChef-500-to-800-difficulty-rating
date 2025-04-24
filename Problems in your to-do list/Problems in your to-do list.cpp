#include<iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    for(int i=0; i<t; i++){
        int count=0;
        int q;
        cin>>q;
        for(int i=0; i<q; i++){
            cin>>x;
            if(x>=1000){
                count++;
            }

        }
        cout<<count<<endl;
    }

}
