#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int p1=0, p2=n-1, ta=0, tb=0 ,cnta=0, cntb=0;
    while(p1<=p2){
        if(ta<=tb) {
            ta +=a[p1];
            cnta++;
            p1++;
        }
        else{
          tb +=a[p2];
          cntb++;
          p2--;
        }
    }
    cout<<cnta<<" "<<cntb<<"\n" ;
    return 0;
}
