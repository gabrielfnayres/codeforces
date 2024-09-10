#include <bits/stdc++.h>
#define INF 1000000000
#define pb push_back
#define mp make_pair
#define endl '\n'

typedef long long ll;

using namespace std;


int main(){


    int t;
    cin >> t;
    vector<int> resp;
    while(t--){

        int l;
        cin >> l;
        vector<int> r; 
        for(int i = 0; i < l; i++){
            int x;
            cin >> x;
            r.pb(x);
        }
        sort(r.begin(), r.end());
        cout << 2*(abs(r[0] - r[l-1])) << endl;
    }

    return 0;
}