#include<bits/stdc++.h>
using namespace std;

void Merge(int *a, int low, int mid, int high) {

        int i = low, j = mid+1, k = 0;
        int c[high-low+1];

        while(i <= mid && j <= high) {

            if(a[i] < a[j])
                c[k++] = a[i++];
            else
                c[k++] = a[j++];

        }

        while(i <= mid) c[k++] = a[i++];

        while(j <= high) c[k++] = a[j++];

        k = 0;
        for(int temp = low; temp <= high; temp++)
            a[temp] = c[k++];

}


void Merge_Sort(int *a, int low, int high) {

        int mid = (low+high)/2;
        if(low < high){
            Merge_Sort(a,low,mid);
            Merge_Sort(a,mid+1,high);
            Merge(a,low,mid,high);
        }

}

int main() {
    int n;
    cout << "Enter The Length of the Array : ";
    cin >> n;
    int *a = new int[n];
    cout << "Enter the Elements of the Array :\n";
    for(int i = 0; i < n; i++) cin >> a[i];
    Merge_Sort(a,0,n-1);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
