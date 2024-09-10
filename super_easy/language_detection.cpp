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
    int i = 1;
    cin >> s;
    while(s != "#"){

        if(s == "HELLO"){
            cout <<"Case " << i << ": "<< "ENGLISH" << endl;
        } else if(s == "HOLA"){
            cout <<"Case " << i << ": "<< "SPANISH" << endl;
        } else if(s == "HALLO"){
            cout <<"Case " << i << ": "<< "GERMAN" << endl;
        } else if(s == "BONJOUR"){
            cout <<"Case " << i << ": "<< "FRENCH" << endl;
        }else if(s == "CIAO"){
            cout <<"Case " << i << ": "<< "ITALIAN" << endl;
        } else if(s == "ZDRAVSTVUJTE"){
            cout <<"Case " << i << ": "<< "RUSSIAN" << endl;
        }else {
            cout <<"Case " << i << ": "<< "UNKNOWN" << endl;
        }
        i++;
        cin >> s;

    }
}