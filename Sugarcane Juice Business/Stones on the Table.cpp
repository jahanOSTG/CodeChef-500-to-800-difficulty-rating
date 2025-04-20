#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    int count = 0;
    cin >> s;

    for(int i = 0; i < t-1; i++){
             if(s[i] == s[i + 1]) {
            count++;
        }


    }

        cout << count << endl;

}
