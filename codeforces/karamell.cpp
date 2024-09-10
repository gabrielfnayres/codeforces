/**
* @file karamell.cpp
*
* Created on 2024-09-04 at 20:19:26
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

#define MAXN 100
#define MAXSOMA 10100
bool dp[MAXN][MAXSOMA];

int n, v[MAXN];
vector<int> v1,v2;
int soma;
// dp[i][soma] é true se é prossivel fazer a soma s com elementos até o i-esimo

int main() { _
    soma = 0;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >>v[i];
        soma +=  v[i];
    }

    if(soma % 2){
        cout << "-1" << endl;
        return 0;
    }

    for(int i =1; i <= soma; i++){
        dp[0][i] = false;
    }

    dp[0][0] = true;

    for(int i = 1; i<= n; i++){
        for(int s = 0; s <= soma; s++){
            dp[i][s] = dp[i-1][s];

            if(s >= v[i] && dp[i-1][s-v[i]]){
                dp[i][s]=true;
            }
        }
    }
// se dp[n][soma/2] == true
    if(!dp[n][soma/2]){
        cout << "-1" <<endl;
        return 0;
    }
    v1.clear();
    v2.clear();

    int s = soma/2;
    for(int i = n; i> 0;i--){
        
    }
    return 0;
};