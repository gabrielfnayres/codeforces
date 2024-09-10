/**
* @file e.cpp
*
* Created on 2024-09-01 at 20:20:38
* @author Gabriel Ayres
*/

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<int> dp(2*INF + 1, 1);

int main() { _
    int tt;
    cin >> tt;
    while(tt--) {
        int l, r;
        cin >> l >> r;

        int cont = 0;

        for(int i = l + 1; l <= r; i++){
            
        }
    } 
    
    return 0;
};