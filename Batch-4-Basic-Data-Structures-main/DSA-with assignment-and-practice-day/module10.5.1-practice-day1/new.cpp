#include<bits/stdc++.h>
using namespace std;

int fib(int n, int f = 0, int s = 1)
{
    if (n == 1)
    {
        return f;
    }

    return fib(n - 1, s, f + s);
}

int main()
{
    int c = fib(8);
    cout << c << endl;
    return 0;
}
