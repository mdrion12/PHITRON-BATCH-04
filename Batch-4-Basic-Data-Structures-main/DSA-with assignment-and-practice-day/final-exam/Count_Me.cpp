#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  cin.ignore();

    while(t--)
    {
      string input;
    getline(cin, input);

   stringstream iss(input);
  
    map<string, int> mp;
  string s;
 string word;
    while (iss >> word) {
        mp[word]++;
       if (mp[word] > mp[s]) {
            s = word;
        }
    }
    int count = mp[s];
   cout << s<<" "<<  count << endl;
    }
    return 0;
}
