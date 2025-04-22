#include<iostream>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        cout << min(x, n - x) << endl;
    }
    return 0;
}
