#include <iostream>

using namespace std;

int main() {
    int w, a;
    cin >> w;
    if (w == 2) a = 0;
    else
    if (w % 2 == 0) a = 1;
    else
        a = 0;
    if (a == 1) cout << "YES";
    if (a == 0) cout << "NO";
    return 0;
}