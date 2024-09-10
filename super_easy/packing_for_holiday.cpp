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
    int i = 1;
    while(t--){
        int l, w, h;
        cin >> l >> w >> h;
        if(l <= 20 && w <= 20 && h <= 20){
            cout << "Case " << i << ": good" << endl; 
        }else{
            cout << "Case " << i << ": bad" << endl;
        }
        i++;
    }

}