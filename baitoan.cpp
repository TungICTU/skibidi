#include <iostream>
#include <string>
using namespace std;

int tinhs (int n) {
    int s = 0;
    string num = to_string(n) + to_string(n);
    int nn = stoi(num);
    for (int i = 1; i <= n; i++) {
        s += nn;
    }
    return s;
}

int main () {
    int n;
    cin >> n; cout << "nhap n: ";
    cout << tinhs(n);
}