#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int a[], int n)
{
    for(int i = 0; i < n; i++){
        int key = a[i];
        int j = i-1;
        while( (key < a[j]) && (j >= 0)){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    int n;
    cout << "Enter Size of the Array ";
    cin >> n;
    int *a = new int [n];
    cout << "Enter Elements of the Array\n";
    for(int i = 0; i < n; i++) cin >> a[i];
    Insertion_Sort(a,n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
