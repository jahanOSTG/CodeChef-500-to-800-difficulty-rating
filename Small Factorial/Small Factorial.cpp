#include<iostream>
using namespace std;
int main(){
    int t,a;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>a;
          int fact=1;
        for(int i=1;i<=a;i++){
            fact=fact*i;

        }
         cout<<fact<<endl;

    }
}
