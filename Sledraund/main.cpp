
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, c;
    cin >> n >> k;
    c = k;
    vector<int> b(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        if ((b[i] == 0)&&(i<=k)) {
            cout << i;
            return 0;
        }

    }
    for (int i = k ; i < n+1; ++i) {

        if (b[i] < b[i - 1]) {
            cout << c;
            return 0;
        }
        if (b[i] == b[i - 1]) c += 1;
    }

    cout << c;
    return 0;
}