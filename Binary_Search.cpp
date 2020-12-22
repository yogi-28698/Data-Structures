#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int *a, int n, int key)
{
    int left = 0, right = n-1, mid = -1;
    while(left <= right){

        mid = (left+right)/2;

        if(a[mid] == key)
            return mid;

        else if(key < a[mid])
            right = mid-1;

        else
            left = mid+1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter Size of the Array ";
    cin >> n;
    int *a = new int [n];
    cout << "Enter Elements of the Array\n";
    for(int i = 0; i < n; i++) cin >> a[i];
    int key;
    cout << "Enter the Key to be Searched ";
    cin >> key;
    cout << Binary_Search(a,n,key);
    return 0;
}
