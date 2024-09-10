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


    int  n; cin >> n;
    int i= 1;
    vector<int> a(3);
    while(n--){
        cin >> a[0] >> a[1] >> a[2];
        sort(all(a));
        cout << "Case " << i << ": " << a[1] << endl;
        i++;
    }
}