#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
                if(s[i]=='A'){
                    cout<<'T';
                }
                else if(s[i]=='T'){
                     cout<<'A';
                }else if(s[i]=='C'){
                      cout<<'G';

                }else if(s[i]=='G'){
                      cout<<'C';
                }

        }
         cout << endl;
    }

}
