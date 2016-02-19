#include <iostream>

using namespace std;

int main() {
    int N, s = 0;
    cin >> N;
    while (N > 0) {
        s += N % 10;
        N /= 10;

    }
    cout << s;

    return 0;
}