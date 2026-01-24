#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,x[200005];
    cin>>n>>t;
    for(int i=0;i<n;i++)
    cin>>x[i];
        long long l = 0, r = 1e18;
        long long ans = 0;

        while(l <= r)
        {
           long long  mid = l + (r-l)/2;
           long long total = 0;
            for(int i=0; i<n; i++){
                total +=(mid / x[i]);
                 if(total >= t){
                    break;
                 }
            }
            if(total >= t)
            {
                r = mid - 1;
                ans = mid;
            }
            else
            {
                l = mid + 1;
            }

        }
        cout<<ans<<endl;


    return 0;
}

