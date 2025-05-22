#include <iostream>
using namespace std;

int main(){
    int t, a;
    cin >> t;

    for(int i = 0; i < t; i++){
            cin>>a;
            if(a%5!=0){
                cout<<"-1"<<endl;
            }else{

            int s1= a/10;
            int s2=(a%10)/5;
            cout<<s1+s2<<endl;

            }

    }


}
