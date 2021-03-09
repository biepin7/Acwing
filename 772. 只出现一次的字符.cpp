#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int a[26];

int main() {
    string s;
    cin >> s;
    for (char c : s) {
        a[c - 'a']++;
    }

    for (char c : s) {
        if (a[c - 'a'] == 1) {
            cout << c;
            return 0;
        }
    }

    cout << "no";

    return 0;
}