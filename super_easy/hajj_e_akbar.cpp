#include <bits/stdc++.h>
#define INF 1000000000
#define pb push_back
#define mp make_pair
#define endl '\n'
#define   _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()

typedef long long ll;
using namespace std;

int main(){_

    string s;
    cin >> s;
    int i = 1;

    while(s != "*"){

        if(s == "Hajj") {
            cout << "Case " << i <<": " << "Hajj-e-Akbar" << endl;
        }else {
            cout <<"Case "<< i << ": " << "Hajj-e-Asghar" << endl;
        }

        i++;
        cin >> s;

    }

}