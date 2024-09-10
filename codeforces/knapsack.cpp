/**
* @file knapsack.cpp
*
* Created on 2024-09-01 at 16:03:05
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

int main() { _
    int t;
    cin >> t;
    while(t--){
        int n, w; 
        cin >> n >> w;
        int m = 0;
        vector<int> pesos(n);

        int c = 0;

        for(int i = 0; i < n; i++){
            cin >> pesos[i];
            if(pesos[i] <= w && c <= w){
                if(pesos[i] == w){
                    c = pesos[i];
                    m = 1;
                    break;
                }
                c += pesos[i];
                m++;
            }else {
                pesos[i] = 0;
            }
        }   

    
        if(!(c >= ceil(w/2) && c <= w )){
            cout << -1 << endl;
        } else  {
            if(m == 0){
                cout << -1 << endl;
            }else{
                cout << m << endl;
            }
            
            for(int i = 0; i < pesos.size(); i++){
                if(pesos[i] != 0){
                    cout << i + 1 << " ";
                }
                
            }
            cout << endl;
        }
        
    }

    return 0;
};