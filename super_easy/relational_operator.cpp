#include <bits/stdc++.h>
#define INF 1000000000
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;


int main(){


    int n; cin >> n;

    vector<pair<int, int>> pp(n);


    for(int i = 0; i < n; i++){
        cin >> pp[i].first >> pp[i].second;
    }

    for(int i = 0; i < n; i++){
        if(pp[i].first < pp[i].second) cout  << "<" << endl;
        else if(pp[i].first > pp[i].second) cout << ">" << endl;
        else cout << "=" << endl;
    }


    return 0;
}