#include <iostream>

using namespace std;

void f(int a, int n) {
    if (n == 0) {
        cout << endl;
        return;
    }
    for (int i = 1; i <= a; ++i) {
        cout << a << " ";
        f(i, n-a);
    }
    f(a+1, n-1);
}

int main() {
    int n;
    cin >> n;
    f(1, n);
    return 0;
}