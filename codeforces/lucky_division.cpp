		/**
* @file test1.cpp
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
  	
	ll n;
	cin >> n;


	// 7 4 44 47 74 444 447 474 477 744 747 774 777

	for(int i = 1; i <= n; i++){
		if(i == 7 || i == 4 || i == 44 ||i==47|| i == 74 || i == 444 || i == 447 || i==474 || i == 477 || i==744 || i == 747 || i == 774 || i == 777){
			if(n % i == 0){
				cout << "YES" << endl;
				return 0;
			}
		}
	}

	cout << "NO" << endl;


    return 0;
};