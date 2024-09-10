		/**
* @file test1.cpp
*
* 
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
      int n, m;
      cin >> n >> m;
      vector<int> A(n);
      for(int i = 0; i < n; i++){
       		cin >> A[i];
            if(A[i] > m){
               A.pop_back();
               i--;
               n--;
            }
      }

      int slow = 0;
      int fast = 0;

      sort(all(A));
       
      for(int a : A){
         cout << a << endl;
      }

    }


    return 0;
};