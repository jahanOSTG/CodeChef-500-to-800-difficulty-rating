#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num > 90) {
        cout << "A" << endl;
    } else if (num > 70 && num <= 90) {
        cout << "B" << endl;
    } else if (num >= 40 && num <= 70) {
        cout << "C" << endl;
    } else {
        cout << "F" << endl;
    }

    return 0;
}
