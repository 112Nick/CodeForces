#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,//кол-во мушкеторо
    sum,//суммарная узнаваемость тройки
    minsum=-1,
            m;//кол-во пар воинов,знающих друг друга
    cin>>n>>m;
    vector<vector<bool>> g(n, vector<bool>(n, false));
    vector<int> u(n, 0);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        g[--a][--b] = true;
        g[b][a] = true;
        ++u[a];
        ++u[b];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (g[i][j] == true) {
                for (int c = j; c < n; ++c) {
                    if (g[i][c]==true && g[c][j]==true) {
                        sum=u[i]+u[j]+u[c]-6;

                        if (minsum==-1||sum<minsum) minsum=sum;
                    }
                }
            }
        }
    }

cout<<minsum;
    return 0;
}