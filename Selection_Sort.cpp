#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int *a, int n)
{
    for(int i = 0; i < n; i++){
        int jmin,min = i+1;
        for(jmin = i+2; jmin < n; jmin++){
            if(a[min] > a[jmin])
                min = jmin;
        }
        if(a[i] > a[min])
            swap(a[i],a[min]);
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
    Selection_Sort(a,n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
