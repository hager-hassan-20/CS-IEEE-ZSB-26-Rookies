#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int p1=0, p2=0, maxn=0, sum=0;
    while(p1<n){
      while(p2<n && sum +a[p2] <= t ){
        sum += a[p2];
        p2++;
      }
      maxn = max(maxn,p2-p1);
      sum -= a[p1];
      p1++;
    }
    cout<<maxn<<"\n" ;
    return 0;
}
