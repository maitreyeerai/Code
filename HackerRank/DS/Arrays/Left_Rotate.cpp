//Time comp. -> O(n)

vector<int> rotateLeft(int d, vector<int> arr) {
    while(d>0){
        int v = arr[0];
        arr.erase(arr.begin());
        arr.push_back(v);
        d--;
    }
    return arr;
}

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        ans[(i + (n-d)) % n] = arr[i];
    }
    return ans;
}
