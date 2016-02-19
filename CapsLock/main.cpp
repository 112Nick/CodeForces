#include <iostream>
#include <stdlib.h>

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
    int k = 0;
    string s;
    cin >> s;
    if (s.size() == 1 && s[0] > 90) {
        cout << r(s[0]);
        return 0;
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 91) k = k + 1;
    }

    if (k == s.size()) {
        cout<<s[0];
        for (int i = 1; i < s.size(); i++)
            cout << r(s[i]);
        return 0;
    }
    k=0;
    for (int i = 1; i < s.size(); i++) {
        if (s[0] < 91 && s[i] > 90) k = k + 1;
    }
    if (k == s.size() - 1) {
        cout << s;
        return 0;
    }
    k = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] > 90) k = k + 1;
    }
    if (k == s.size()) {
        cout << s[0];
        for (int i = 1; i < s.size(); i++) {
            cout << r(s[i]);
        }
        return 0;
    }
    k = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[0] > 90 && s[i] < 91) k = k + 1;
    }
    if (k == s.size() - 1) {
        for (int i = 0; i < s.size(); i++) {
            cout << r(s[i]);
        }
    }
    system("pause");
    return 0;
}