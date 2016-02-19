#define _CRT_SECURE_NO_WARNINGS

#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> a;
    vector<string> b;
    vector<string> c;
    vector<string> d;
    vector<string> e;
    vector<string> f;
    vector<string> g;

    vector<double> a1;
    vector<double> b1;
    vector<double> c1;
    vector<double> d1;
    vector<double> e1;
    vector<double> f1;
    vector<double> g1;
    int count = 1;
    ifstream in;
    ofstream out;
    in.open("C:\\Users\\Jury\\Desktop\\input.txt", ifstream::binary | ifstream::in);
    out.open("C:\\Users\\Jury\\Desktop\\output.txt", ofstream::binary | ofstream::out);
    char line[1000];
    char *word;
    const char *del = ";";
    in.getline(line, 1000);
    word = strtok(line, del);
    while (word != NULL) {

        if (count == 1) a.push_back(word);
        if (count == 2) b.push_back(word);
        if (count == 3) c.push_back(word);
        if (count == 4) d.push_back(word);
        if (count == 5) e.push_back(word);
        if (count == 6) f.push_back(word);
        if (count == 7) g.push_back(word);
        count++;

        if (count == 8)
            count = 1;

        word = strtok(NULL, del);
        if (word == NULL) {
            in.getline(line, 1000);
            word = strtok(line, del);
        }
    }
    for (int i=1; i<8;i++){
        a1[i]=stod(a[i]);
        b1[i]=stod(b[i]);
        c1[i]=stod(c[i]);
        d1[i]=stod(d[i]);
        e1[i]=stod(e[i]);
        f1[i]=stod(f[i]);
        g1[i]=stod(g[i]);
    }
}