#include<iostream>
using namespace std;
int main(){
    int t,n,x;
    int age;
    int count=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>x;
        int count=0;
       for(int i=0;i<n;i++){
            cin>>age;
            if(age>=x){
                    count++;

            }



       }
        cout<<count<<endl;
    }
}
