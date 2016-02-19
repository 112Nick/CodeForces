#include <iostream>

using namespace std;

int main() {
    int x=0, n;
    string s;
    cin>>n;
    for (int i=0;i<n;++i){
        cin>>s;
        if (s=="++X"||s=="X++") x=x+1;
        if (s=="--X"||s=="X--") x=x-1;
    }
    cout<<x;
    return 0;
}