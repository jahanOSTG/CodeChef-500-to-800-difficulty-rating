#include<iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>x;
        int income=x*50;
        int sugar= income*0.20;
         int rent= income*0.30;
         int profit=income-(sugar*2+rent);
          cout<<profit<<endl;


    }

}
