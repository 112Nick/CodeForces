#include <iostream>
#include <vector>

using namespace std;

int main() {


    int n, a, c;
    double x=0.0;
    cin>>n>>a>>c;
    vector<int> k(n);
    vector<double> b(n);
    for (int i=0;i<n;i++){
        cin>>k[i]>>b[i];
    }
    for (int i=0; i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j) break;
            if (k[i]-k[j]==0) break;
            x=(b[j]-b[i])/(k[i]-k[j]);
            if (x>a && x<c) {
                cout<<"YES";
                return 0;
            }
        }
    }
cout<<"NO";
    return 0;
}