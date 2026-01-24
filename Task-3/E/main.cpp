#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int n,m;
long long a[100005],b[100005];

bool ch(long long r)
{
    int j = 0;
    for (int i=0; i<n; i++)
    {
        while (j<m && abs(b[j]-a[i])>r)
        {
            if (b[j]<a[i])
                j++;
            else
                break;
        }
        if (j==m || abs(b[j]-a[i])>r)
            return false;
    }
    return true;
}

int main()
{
    cin>>n>> m;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    long long l=0, r=2e9;
    long long  ans=0;

    while (l<=r)
    {
        long long mid= l+(r-l)/2;

        if (ch(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
