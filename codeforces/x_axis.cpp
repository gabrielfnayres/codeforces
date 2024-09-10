		/**
* @file test1.cpp
*
* Created on 2024-09-03 at 08:54:25
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
    vector<int>test;

    cin >> tt;
    while(tt--) {
     	vector<int> A(3);
     	cin >> A[0] >> A[1] >> A[2];

     	sort(all(A));

     	// let x <= y <= z
   		 // min f(a) = abs(x-a) + abs(y-a) + abs(z-a)

     	// if a == y it is min and we return z - x

  //   	abs(z - a) + abs(x - a) >= abs(z - a) because *a* can be y

     	cout << A[2] - A[0] << endl;
    }


    return 0;
};