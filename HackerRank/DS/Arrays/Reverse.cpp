//to show implementation --> Time Comp. O(n)
vector<int> reverseArray(vector<int> a) {
        int temp = 0;
        int n = a.size();
        for (int i = 0; i < n/2; ++i) {
                temp = a[n-i-1];
                a[n-i-1] = a[i];
                a[i] = temp;
        }
        return a;
}
//short --> Time Comp. O(n)
vector<int> reverseArray(vector<int> a) {
    reverse(a.begin(), a.end());
    return a;
}
