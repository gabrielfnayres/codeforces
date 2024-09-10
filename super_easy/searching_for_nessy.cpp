#include <bits/stdc++.h>
#define INF 1000000000
#define pb push_back
#define endl '\n'
using namespace std;


int main(){

    int n; cin >> n;
    vector<pair<int, int>> mp; 
    for(int i = 0; i < n; i++){

        int x, y;
        cin >> x >> y;


        x = x/3;
        y = y/3;

        cout << x*y << endl;

    }


    

}