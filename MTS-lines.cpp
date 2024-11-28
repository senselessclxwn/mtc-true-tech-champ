#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int check = 0;
    for (char c : s) {
        if (check == 0 && c == 'M') {
            check = 1;
        }
        else if (check == 1 && c == 'T') {
            check = 2;
        }
        else if (check == 2 && c == 'S') {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}