#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t,x,y;
  cin>>t;
  int s1,s2;
  for(int i=0;i<t;i++){
    cin>>x>>y;
    int z=x+y;

    s1=(500-(x*2))+(1000-(z*4));

       s2=(1000-(y*4))+(500-(z*2));

    cout<<max(s1,s2)<<endl;
  }
  }




