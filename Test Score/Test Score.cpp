#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, x, y;
        cin >> n >> x >> y;

        // Check if Y is achievable
        if (y % x == 0 && y <= n * x) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
