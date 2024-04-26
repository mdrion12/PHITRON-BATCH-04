#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> c(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        c.insert(c.begin() + n + i, a[i]); 
    }

   

    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }

    return 0;
}
