#include<bits/stdc++.h>
using namespace std;

void Max_Heapify(int *a, int index, int heap_size){   //It will Build the max-heap every time when heap_sort will call it.

    int left = 2*index+1, right = 2*index+2;
    int largest = index;
    if(left < heap_size && a[left] > a[index])
        largest = left;
    if(right < heap_size && a[right] > a[largest])
        largest = right;
    if(largest != index) {
        swap(a[largest],a[index]);
        Max_Heapify(a,largest,heap_size);
    }

}

void Build_Max_Heap(int *a, int heap_size) {

        for(int i = heap_size/2 - 1; i >= 0; i--)  //Building the Max-Heap
            Max_Heapify(a,i,heap_size);

}

void Heap_Sort(int *a, int heap_size) {

        Build_Max_Heap(a,heap_size);
        int j = 1;                                 //Variable to Decrease the size of Heap by 1 every time after swapping
        for(int i = heap_size-1; i > 0; i--){
            swap(a[0],a[i]);
            Max_Heapify(a,0,heap_size-j);          //Again Preparing the Max-Heap
            j++;
        }

}

int main() {

    int n;
    cout << "Enter the Length of the Array : ";
    cin >> n;
    int *a = new int[n];
    cout << "Enter the Elements of the Array :\n";
    for(int i = 0; i < n; i++) cin >> a[i];
    Heap_Sort(a,n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
