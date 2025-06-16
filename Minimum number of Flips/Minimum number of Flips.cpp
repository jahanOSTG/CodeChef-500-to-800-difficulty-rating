# include<iostream>
using namespace std;
int main(){
    int t,n,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a;
            sum=sum+a;
        }
            if(sum%2==0){
                cout<<abs(sum/2)<<endl;
            }else if(sum%2 != 0){
                cout<<-1<<endl;
            }else{
                cout<<0<<endl;
            }
        }
    }

