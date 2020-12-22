#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int *a, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {  // Inner Loop will run one time less on every run of outer loop
            if(a[j] > a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}

int main() {
    int n;
    cout << "Enter The Length of the Array : ";
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Bubble_Sort(a,n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
