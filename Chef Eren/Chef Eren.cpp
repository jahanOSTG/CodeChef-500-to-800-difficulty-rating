#include <iostream>
using namespace std;

int main(){
    int t, a, b,c;
    cin >> t;
    int sum1,sum2;
    for(int i = 0; i < t; i++){
        cin >> a >> b >>c;
        int odd=(a+1)/2;
        int even=a/2;
        cout<<odd*c+even*b<<endl;

    }


}
