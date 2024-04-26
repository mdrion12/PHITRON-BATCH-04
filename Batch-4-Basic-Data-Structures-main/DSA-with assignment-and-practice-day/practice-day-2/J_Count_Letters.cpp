#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    cin>>c;
    vector<int> t(26,0);
    for(int i=0;i<c.size();i++)
    {
        t[c[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(t[i]!=0)
        {
            cout<<char(i+'a')<<" : "<<t[i]<<endl;
        }
    }


    return 0;
}