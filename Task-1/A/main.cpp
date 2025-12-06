#include <iostream>

using namespace std;

int main()
{
    int x,n,q;
    cin>>x>>n;
    int w[105];
    for(int i=1; i<=n; i++)
    {
        cin>>w[i];
    }
    cin>>q;

    int a[105]= {0};
    int currentW = x;

    while(q--)
    {

        int p;
        cin>>p;

        if(a[p]==0)
        {
            currentW+=w[p];
            a[p]=1;
        }
        else
        {
            currentW-=w[p];
            a[p]=0;
        }

        cout<<currentW<<endl;
    }



return 0;
}
