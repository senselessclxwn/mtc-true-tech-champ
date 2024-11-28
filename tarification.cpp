#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int u;
    int pay;
    cin >> a;
    cin >> b;
    cin >> u;
    if (u > 100) {
        pay = (u - 100) * b + a;
    }
    else {
        pay = a;
    }
    cout << pay;
}