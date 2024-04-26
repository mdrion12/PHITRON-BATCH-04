#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
   {
    cin>>s[i];
   }
int x;
cin>>x;
int l=0;
int r=n-1;
bool flag=false;
while(l<=r)
{
    int mid_index=(l+r)/2;
    if(s[mid_index]==x)
    {
        flag =true;
        break;
    }
    if(x>s[mid_index])
    {
        l=mid_index+1;
    }
    else
    {
        r=mid_index-1;
    }

}
if(flag==true) cout<<"yes"<<endl;
else cout<<"no"<<endl;

    return 0;
}