#include <iostream>
#include<bits/stdc++.h>
using namespace std;

  int n,m,x;
  int h[20005],b[20005];
bool checked(int g){
    for(int i=0; i<g; i++)
    {
         if(h[i]>b[i])
            return false;
    }
    return true;
}

int main()
{
    cin>>n>>m>>x;

    for(int i=0; i<n; i++)
    {
        cin>>h[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

        int l = 0, r = n-1;
        int ans = 0;

        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if(checked(mid))
            {
                l = mid + 1;
                ans = mid;
            }
            else
            {
                r = mid - 1;
            }

        }
        if(ans>=x){
        cout<<"Yes"<<endl;
        } else{
            cout<<"No"<<endl;
        }

    return 0;
}
