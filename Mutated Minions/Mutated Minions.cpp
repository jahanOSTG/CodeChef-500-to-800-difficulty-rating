#include<iostream>
using namespace std;
int main(){
    int t,n,k,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
          int count=0;

        for(int i=0;i<n;i++){
                cin>>x;

            if((x+k)%7==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
