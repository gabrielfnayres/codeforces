/**
* @file closest_point.cpp
*
* Created on 2024-09-01 at 23:20:40
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
ll point_dist(ll a, ll b) {return (ll)sqrt((a*a)+(b*b));}

int main() { _
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        string resp;
        vector<int> at(n);

        for(int i = 0; i < n; i++){
            cin>> at[i];
        }
        if(n > 2){

            resp = "NO";
        }else if(n == 2){
            int t = abs(at[0] - at[1]);

            if(t == 1){
                resp = "NO";
            } else {
                resp = "YES";
            }
        }
        cout << resp << endl;
    }
    
    return 0;
};