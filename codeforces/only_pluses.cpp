/**
* @file only_pluses.cpp
*
* Created on 2024-09-03 at 21:48:59
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
        
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(all(arr));
        for(int i = 0; i < 5; i++){
            arr[0]++;
            sort(all(arr));
        }
        cout << arr[0]*arr[1]*arr[2] << endl;
    } 
    
    return 0;
};