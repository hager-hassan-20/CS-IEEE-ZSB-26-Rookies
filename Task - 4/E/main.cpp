#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int p1=0, p2=0, cnt=0, sum=0;
      while(p2<n){
        sum += a[p2];
        p2++;
        while(sum>x){
            sum -= a[p1];
            p1++;
    }
        if (sum==x) {
            cnt++;
        }
    }
    cout<<cnt<<"\n" ;
    return 0;
}

