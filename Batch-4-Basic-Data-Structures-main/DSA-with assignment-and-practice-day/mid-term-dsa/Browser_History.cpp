#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> l;
    string x;
    while (true) {
        cin >> x;
        if (x == "end") {
            break;
        }
        l.push_back(x); 
    }

    int t;
    cin >> t;
    auto n = l.begin(); 
    while (t--) {
        string s;
        cin >> s;
        if (s == "visit") {
            string m;
            cin >> m;
            auto it = find(l.begin(), l.end(), m);
            if (it != l.end()) {
                n = it;
                cout << *it << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (s == "next") {
            if (n != l.end()) {
                ++n;
                cout << *n << endl;
            } else {
                cout << "Not Available" << endl; 
            }
        } else if (s == "prev") {
            if (n!= l.begin()) {
                --n;
                cout << *n << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
