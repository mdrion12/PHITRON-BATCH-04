#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
vector<int> c(n);
for(int i=0;i<n;i++)
{
    cin>>c[i];
}
int count=0;
   for (int i = 0; i < n; i++) {
        
        if (find(c.begin(), c.end(), c[i] + 1) != c.end()) {
            count++;
        }
    }
cout<<count<<endl;

    return 0;
}