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

    int n;
    cin >> n;
    while(n--){

        string s;

        cin >> s;
        int i = 0;  
        int f =  s.size() - 1;

        if(s[i] == 'o' && s[f] == 'e'){
            cout << "1" << endl;
        } else if(s[i] == 't' && s[f] == 'o'){
            cout << "2" << endl;
        } else if(s[i] == 't' && s[f] == 'e'){
            cout << "3" << endl;
        } else if(s[i] == 'f' && s[f] == 'r'){
            cout << "4" << endl;
        } else if(s[i] == 'f' && s[f] == 'e'){
            cout << "5" << endl;
        } else if(s[i] == 's' && s[f] == 'x'){
            cout << "6" << endl;
        }else if(s[i] == 's' && s[f] == 'n'){
            cout << "7" << endl;
        }else if(s[i] == 'e' && s[f] == 't'){
            cout <<  "8" << endl;
        } else if(s[i] == 'n' && s[f] == 'e'){
            cout << "9" << endl;
        }else if(s[i] == 't' && s[f] =='n'){
            cout << "10" << endl;
        }

    }

    return 0;
}