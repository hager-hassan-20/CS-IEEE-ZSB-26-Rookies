#include <iostream>

using namespace std;

bool Binarysearch(int n, int k, int v){
    int sum = 0;
    while(v>0){
        sum += v;
        v /= k;
    }
    return sum >= n;

}

int main()
{
    int n,k;
    cin>>n>>k;

   int l= 0, r= n-1;
   int ans = n;

   while(l <= r){
    int mid = l + (r-l)/2;
    if (Binarysearch(n, k, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;

   }

   }

    cout<<ans<<endl;

    return 0;
}
