#include <bits/stdc++.h>
#define INF 1000000000
#define pb push_back
#define endl '\n'
using namespace std;


int main(){

    int x, y, z, t;

    while(cin >> x >> y >> z >> t){

        int cont  = 0;
        int aux;
        cont += x;

        cont += 80;
        
        cont += y;
        cont += abs(cont - 40);
        aux = cont;
        while(cont != z){
            cont += abs(cont - 40);
            aux += 40;
        }
        while(cont != t){
            cont += 40;
            aux += 40;
        }
        cout << aux << endl;
    }

}