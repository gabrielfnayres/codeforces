/**
* @file summing_digits.cpp
*
* Created on 2024-08-29 at 13:59:23
* @author GabrielCampelo
*/

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main() { _
    int t;
    while(cin >> t){
        if(t == 0){
            break;
        }

        while(t/10 != 0){
            int sum = 0;
            while(t != 0){
                sum = sum + t%10;
                t = t/10;
            }
            t = sum;
        }
        cout << t << endl;
    }
    return 0;
};