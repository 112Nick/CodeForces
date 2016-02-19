#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n=0,k=0,c=0;
    cin>>n>>k;
    vector<int> a(n/k,0);
    vector<int> b(n/k,0);
    for (int i=0;i<(n/k);i++) cin>>a[i];
    for (int i=0;i<(n/k);i++) cin>>b[i];
    for (int i=0;i<pow(10,n); i++)if ( ( ( (i % pow(10,i*n/k) )  /  pow(10,n/k) ) % a[i]==0) && (a[i]!=b[i]) ) c++;

    cout<<c;
    return 0;
}