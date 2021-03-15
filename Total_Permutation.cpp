
// Find the total ways in which the given string can be arranged without repetition

#include<bits/stdc++.h>
using namespace std;

long int fact(int n) {

    if(n == 0) return 1;

    return n*fact(n-1);

}

int main() {

    string s; cin >> s;
    int len = s.length();
    int vow = 0;
    for(int i = 0; i < len; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = char(97 + s[i] - 65);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vow++;
    }
    long int total_permutation = fact(len-vow + 1)*fact(vow);
    //cout << total_permutation;
    int count[26] = {0};
    for(int i = 0; i < len; i++) {
        count[s[i]-97]++;
    }
    int div_factor = 1;
    for(int i = 0; i < 26; i++) {

        div_factor *= fact(count[i]);
    }
    //cout << " " << div_factor;
    cout << (total_permutation/div_factor);
    return 0;
}
