/**
* @file secret_research.cpp
*
* Created on 2024-08-18 at 17:24:46
* @author GabrielCampelo
*/

#include <bits/stdc++.h>
#include <cstring>
#include <cstdio>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int tt;
    string st;
    scanf("%d", &tt);
    while(tt--) {   

        cin >> st;
        int size = st.size();

        if(strcmp(st.c_str(), "1") == 0 || strcmp(st.c_str(), "4") == 0 || strcmp(st.c_str(), "78") == 0) {
            cout << "+" << endl;
        }else if(st[size - 1] == '5' && st[size - 2] == '3'){
            cout << "-" << endl;
        } else if(st[0] == '9' && st[size - 1] == '4'){
            cout << "*" << endl;
        } else if(st[0] == '1' && st[1] == '9' && st[2] =='0'){
            cout << "?" << endl;
        }
        
    } 
    
    return 0;
};
