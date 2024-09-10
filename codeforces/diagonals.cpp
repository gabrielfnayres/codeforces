/**
* @file diagonals.cpp
*
* Created on 2024-09-03 at 20:05:58
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
#define rall(x) (x).rbegin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int tt;
    cin >> tt;
    while(tt--) {
        int n, k;
        cin >> n >> k;

        if(k == 0){
            cout<< "0"<<endl;
            continue;
        }

        k -= n;
        int cont = 1;

        for(int i = n-1; i > 0 && k >0; i--){
            k -= i;
            ++cont;
            if(k > 0){
                k -= i;
                ++cont;
            }
        }
        cout << cont << endl;
    } 
    
    return 0;
};