#include <iostream>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.size(); i++) {
        str1[i] = (char) toupper(str1[i]);
        str2[i] = (char) toupper(str2[i]);
        if (str1[i]!=str2[i]){
            if (str1 > str2) cout << 1;
            if (str1 < str2) cout << -1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}