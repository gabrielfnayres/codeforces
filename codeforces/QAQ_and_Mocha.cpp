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

    	int n;
    	cin >> n;
    	vector<int> a(n);
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
    	}    

    	sort(all(a));
    	int x = n-1;
    	int y = 0;
    	int i = 0;
    	int cont = 0;
		while(x > y && i < x){
			if(a[x]%a[y]==0){
				cont++;
			
			}

			if(y + 1 == x){
				y = i++;
				x--;
			}
			y++;
		}
		cout << "cont: "<< cont << endl;
		if(cont == 2){
			cout << "Yes" << endl;
		}else {
			cout << "No"<< endl;
		}
    }


    return 0;
};