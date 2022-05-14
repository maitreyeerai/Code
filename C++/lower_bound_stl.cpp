#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,v,q;
    cin >> n;
    vector <int> vec;
    for(int i=0; i<n; i++){
        cin >> v;
        vec.push_back(v);
    } 
    cin >> q;
    for(int j=0; j<q; j++){
        cin >> v;
        vector<int>::iterator low = lower_bound(vec.begin(),vec.end(),v);
        if(vec[low-vec.begin()]==v) cout << "Yes " << (low-vec.begin()+1) << endl; 
        else cout << "No " << (low-vec.begin()+1) << endl;
        
    }  
    return 0;
}
//linear traversal would lead to time-out hence the use of lower_bound using an iterator
