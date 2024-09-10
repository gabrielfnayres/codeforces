#include <bits/stdc++.h>
#define INF 1000000000
#define pb push_back
#define endl '\n'
using namespace std;


int main(){
    string s;
    bool fst = true;
    while(getline(cin, s)){


        for(string::iterator it = s.begin(); it != s.end(); ++it){
            if(*it == '"'){

                if(fst){
                    cout << "``";
                } else {
                    cout << "''";
                }
                fst = !fst;
            }else{
                cout << *it;
            }
            
        }
        cout << endl;
    }
}