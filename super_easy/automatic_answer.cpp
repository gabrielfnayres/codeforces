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


    int t;
    
    cin >> t;

    while(t--){
        ll n;
        string resp;
        cin >> n;
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
        resp = to_string(n);
        reverse(all(resp));
        cout << resp[1] << endl;
    }
    return 0;
}