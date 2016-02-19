#include <iostream>
#include <vector>

using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        int d = 0;

        cin >> s[i];
        d = s[i].size();

        if (d > 10) {

            cout << s[i][0] << d - 2 << s[i][d - 1] << endl;
        } else {
            cout << s[i] << endl;
        }
    }

    return 0;
}