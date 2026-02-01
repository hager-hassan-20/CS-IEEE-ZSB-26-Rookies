#include <iostream>

using namespace std;

int main()
{
   long long mod = 1e9+7;
   int n;
   cin>>n;
   int x=1;
  for(int i=0; i<n; i++){
        x=(x*2)%mod;
    }
    cout<<x<<"\n";
    return 0;
}

