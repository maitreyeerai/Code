#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,k,v,i,j;
    cin >> n >> q;
    vector <vector<int>> nvec;
    for(int l=0; l<n; l++){
        cin >> k;
        vector <int> ivec;
        for(int m=0; m<k; m++){
            cin >> v;
            ivec.push_back(v);
        }
        nvec.push_back(ivec);
    }
    for(int l=0; l<q; l++){
        cin >> i >> j;
        cout << nvec[i][j] << endl;
    }
    return 0;
}
