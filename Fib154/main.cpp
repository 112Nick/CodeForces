#include <iostream>

using namespace std;

int f(int N) {
    if (N == 1 || N == 0)
        return N;
    return (f(N-1)+f(N-2));


}

int main() {
    int N;
    cin >> N;
    cout<<f(N);
    return 0;
}