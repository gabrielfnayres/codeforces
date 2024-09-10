/**
* @file strong_pass.cpp
*
* Created on 2024-09-03 at 15:25:30
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
    srand(time(NULL));
    int tt;
    cin >> tt;
    while(tt--) {
    
        string s;
        cin >> s;

        bool mesmo=false;

        int n= s.size();
        for(int i =0; i< n-1;i++){
            cout << s[i];
            if(s[i]==s[i+1] && !mesmo){
                if(s[i] != 'z')  cout << char(s[i]+1);
                else cout << 'a';
                mesmo = true;
            }
        }

        if(mesmo) cout << s[n-1] << endl;
        if(!mesmo && s[n-1] != 'z') cout << s[n-1] << char(s[n-1] +1) << endl;
        else if (!mesmo) cout << s[n-1] <<'a'<< endl;
    }
    
    return 0;
};