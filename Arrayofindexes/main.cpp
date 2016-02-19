#include <iostream>

using namespace std;

int Function(int *array, int n, int *answer1) {
    int k=1;
    answer1[0] = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (array[i + 1] == array[i]) {
            int *answer2 = new int[k + 1];
            copy(answer1, answer1 + k, answer2);
            answer2[k] = i + 1;
            answer1 = new int[k + 1];
            copy(answer2, answer2 + k + 1, answer1);
            delete[]answer2;
        }
        if (array[i + 1] > array[i]) {
            k = 1;
            answer1 = new int[k];
            answer1[0] = i + 1;
        }
    }
    return k;
}

int main() {
    int array[] = {1, 4, 2, 3, 4, 7, 4, 3, 5, 7, 7};
    int n = sizeof(array) / sizeof(int);
    int c = 1;
    int *ans = new int[c];
    ans[0]=6;
    n=Function(array, n, ans);
    for (int i = 0; i < n; ++i) {
        cout <<ans[i];
    }

    return 0;
}