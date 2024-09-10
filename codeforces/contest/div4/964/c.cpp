/**
* @file c.cpp
*
* Created on 2024-09-01 at 19:19:46
* @author Gabriel Ayres
*/

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int tt;
    cin >> tt;
    while(tt--) {
        int n, s, m;
        cin >> n >> s >> m;

        for(int i = 0; i < n; i++){
            int l, r;
            cin >> l >> r;
            if(i == 0){
                m -= (l - r);
            }else {
                m -= (r - l);
            }

        }
    } 
    
    return 0;
};