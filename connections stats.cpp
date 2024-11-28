#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (n == 1) {
        if (a[0] % 2 == 0) {
            cout << "1";
        }
        else {
            cout << "0";
        }
    }
    else {
        if (sum % 2 == 0) {
            cout << "1";
        }
        else {
            cout << "0";
        }
    }
    return 0;
}