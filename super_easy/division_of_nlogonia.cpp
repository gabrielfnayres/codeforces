#include <bits/stdc++.h>
#define INF 1000000000
#define pb push_back
#define mp make_pair
#define endl '\n'

using namespace std;


int main(){


    int k;
    int n, m;
    int x, y;

    while(1){
        cin >> k;
        if(k == 0){
            break;
        }
        cin >> n >> m;
        
        while(k--){
            

            cin >> x >> y;

            if(x > n && y > m){
                cout << "NE" << endl;
            } else if(x > n && y < m){
                cout << "SE" << endl;
            } else if( x < n && y > m){
                cout << "NO" << endl;
            } else if(x < n && y < m){
                cout << "SO" << endl;
            } else {cout << "divisa" << endl;}
        }
    }

    return 0;

}