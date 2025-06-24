#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,t;
    cin>>t;
    for(int i=0;i<t;i++){
     cin>>a>>b>>c;
     int sum=a+b+c;
     int x=min({a,b,c});
     int paid=sum-x;
     cout<<paid<<endl;


    }
  }

