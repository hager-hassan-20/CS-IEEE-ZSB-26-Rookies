#include <iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
          int n ;
          cin>>n;
          int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int p1=0, p2=n-1, t1=0, t2=0, cnta=0, cntb=0, sum=0;

    while(p1<=p2){
        if(t1<=t2){
            t1+=a[p1];
            p1++;
            cnta++;
        }else{
            t2+=a[p2];
            p2--;
            cntb++;
        }
        if(t1==t2){
            sum=cnta+cntb;
        }
    }
    cout<<sum<<"\n";
    }
    return 0;
}
