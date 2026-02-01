#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long  a[20];
     for(int i=0; i<n; i++){
        cin>>a[i];
 }
    long long total=0;
    for (int i=0; i<n; i++){
        total +=a[i];
    }

     long long ans=total;

    for (int mask=0; mask<(1<<n); mask++) {
         long long sum =0;

        for (int i=0; i<n; i++) {
            if (mask & (1<<i))
                sum +=a[i];
        }

        long long diff=total-2*sum;
        if (diff<0){
            diff=-diff;
        }

        if (diff<ans){
            ans=diff;
    }
}

    cout<<ans<<endl;

    return 0;
}


