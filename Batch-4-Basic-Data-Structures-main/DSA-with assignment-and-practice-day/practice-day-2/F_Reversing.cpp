#include<bits/stdc++.h>
using namespace std;
void rev(int n )
{
    
    vector<int> c(n);
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
   for( int i=c.size()-1;i>=0;i--)
   {
    cout<<c[i]<<" ";
   }



}

int main()
{
    int a;
    cin>>a;
    rev(a);


    return 0;
}