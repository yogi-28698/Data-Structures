#include<bits/stdc++.h>
using namespace std;

int Partiton(int *a, int low, int high) {

    int pivot = a[high];   // taking Last element as Pivot
    int i = low-1;        // i is a variable to keep track of the index of smallest element to be placed next
    for(int j = low; j < high; j++) {
        if(a[j] < pivot){
            i++;
            swap(a[i],a[j]);
        }
    }

    swap(a[i+1],a[high]);   // putting the pivot element in its right position

    return i+1;   // Returning the index of Pivot element
}

void Quick_Sort(int *a, int low, int high) {

    if(low < high) {
        int j = Partiton(a, low, high);
        Quick_Sort(a,low,j-1);    // Applying Quick Sort on Left Part
        Quick_Sort(a,j+1,high);   // Applying Quick Sort on Right Part
    }

}

int main() {
    int n;
    cout << "Enter the Length of the Array : ";
    cin >> n;
    int *a = new int[n];
    cout << "Enter The Elements of the Array :\n";
    for(int i = 0; i < n; i++) cin >> a[i];
    Quick_Sort(a,0,n-1);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
