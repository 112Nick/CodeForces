#include <iostream>

using namespace std;

int main() {
  int n=0,a=0,b=0,c=0,k=0;
    cin>>n;
    for (int i=0;i<n;++i){
        cin>>a>>b>>c;
        if (a+b+c>=2) k=k+1;
    }
    cout<<k;
    return 0;
}