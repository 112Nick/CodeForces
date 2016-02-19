#include <iostream>

using namespace std;

char r(char a) {
    int d;
    d = a;
    if (d >= 65 && d < 91) {
        d += 32;
    }
    else if (d >= 97 && d < 123) {
        d -= 32;
    }

    a = (char) d;
    return a;
}

int main() {
    char c;
    cin >> c;

    cout << r(c);
    return 0;
}