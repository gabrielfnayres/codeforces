/**
* @file matrix_stabilization.cpp
*
* Created on 2024-09-04 at 10:17:31
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
    int tt
;    cin >> tt;
    while(tt--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));

        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }


        for(int i =0; i < n; i++){
            for(int j = 0; j < m; j++){
                int mx = 0;
                if(i != 0) mx=max(mx, arr[i-1][j]);
                if(j != 0) mx=max(mx, arr[i][j-1]);
                if(i != n-1) mx=max(mx, arr[i + 1][j]);
                if(j != m-1) mx=max(mx, arr[i][j + 1]);
                arr[i][j] = min(mx, arr[i][j]);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << arr[i][j]<< " ";
            }
            cout << endl;
        }
    } 
    
    return 0;
};