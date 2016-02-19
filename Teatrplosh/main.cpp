#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void BubbleSort(int *arr,int n){
    int k=0, g=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-1-i; ++j) {
            g=g+1;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j + 1], arr[j]);
                k = k + 1;
            }
        }
    }
    cout << "The bubble sort: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << "The number of transpositions: ";
    cout << k << endl ;
    cout<<"The number of comparisons: ";
    cout<<g<<endl<<endl;
}
void SelectionSort(int *arr,int n){
    int imax = 0 ,k=0, g=0 ;
    for (int i = 0; i < n; ++i) {
        imax = 0;
        for (int j = 0; j < n - i; ++j) {
            g=g+1;
            if (arr[j] > arr[imax]) {
                imax = j;
            }
        }
        swap(arr[n-i-1],arr[imax]);
        k = k + 1;
        imax=0;
    }
    cout << "The selection sort: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << "The number of transpositions: ";
    cout << k-1 << endl;
    cout<<"The number of comparisons: ";
    cout<<g<<endl;
}
int main() {
    srand(time(0));
    int n,q;
    cout<<"Put the size of the array:"<<endl;
    cin >> n;
    int *array = new int[n];
    for (int i = 0; i < n; ++i) {
        array[i] = rand() % 50;
    }
    cout << "The random array: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << "  ";
    }
    cout << endl <<endl;
    cout<<"Bubble sort,selection sort or both of them?  2/1/0"<<endl;
    cin>>q;
    cout<<endl<<endl;
    if (q==0) {BubbleSort(array,n);SelectionSort(array,n);}
    if (q==2) BubbleSort(array,n);
    if (q==1) SelectionSort(array,n);
    if (q!=1&&q!=0&&q!=2) do {
            cout<<"Bubble sort or selection sort?  2/1/0"<<endl;
            cin>>q;
        } while(q==1||q==0||q==2);
    cout<<endl<<endl;
    system("pause");
    return 0;
}