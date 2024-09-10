#include <bits/stdc++.h>
#define INF 1000000000
#define pb push_back
#define mp make_pair
#define endl '\n'
#define   _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()

typedef long long ll;
using namespace std;

int main(){_


    int n;
    int i = 1;
    cin >> n;
    while(n != 0){
        
        int x;
        int cont1 = 0;
        int cont2 = 0;

        while(n--){
            cin >> x;
            if(x == 0) cont2++;
            else cont1++;
        }
        cout << "Case " << i << ": " << cont1 - cont2 << endl;
        i++;
        cin >> n;
    }

    return 0;
}