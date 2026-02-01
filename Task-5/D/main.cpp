#include <iostream>

using namespace std;
void FastID(){ios_base::sync_with_stdio(false);cin.tie(nullptr);}

void Prefix(){
    int n, q;
    cin >> n >> q;
    int y[n+1];
    int pre[n+1];
    pre[0]=0;

    for (int i = 1; i <= n; i++) {
          cin >> y[i];
        pre[i] = pre[i - 1] ^ y[i];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        int sum = pre[b] ^ pre[a - 1];
        cout << sum << endl;
    }
}

 main()
{
    FastID();
    Prefix();
    return 0;
}


