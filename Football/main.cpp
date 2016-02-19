#include <iostream>


using namespace std;

int main() {
    int k = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        for (int j = i + 1; j < s.size(); ++j) {
            if (s[i] != s[j]) break;
            else k = k + 1;
            if (k >=6) {
                cout << "YES";
                return 0;
            }
        }
        k=0;
    }
    cout << "NO" ;
    return 0;
}