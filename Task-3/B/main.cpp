#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    int x,q;
    cin>>q;
    while(q--)
    {
        cin>>x;

        int l= 0, r= n-1;
        int ans = 0;

        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if(a[mid]<=x)
            {
                l = mid + 1;
                ans = l;
            }
            else
            {
                r = mid - 1;
            }

        }
        cout<<ans<<endl;

    }
    return 0;
}
