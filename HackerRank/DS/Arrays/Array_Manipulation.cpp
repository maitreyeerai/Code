//Time comp. -> O(n+m)
long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> v(n+1);
    long max=0,x=0;
    for(int i=0; i<queries.size(); i++){
        v[queries[i][0]]+=queries[i][2];
        if((queries[i][1]+1)<=n) v[queries[i][1]+1]-=queries[i][2]; //so that k is added from a to b only
    }
    for(int j=0; j<=n; j++){
        x+=v[j];
        if(x>max) max=x;
    }
    return max;
}
//Not using double for loop as it exceeds the time limit.
