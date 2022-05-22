#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	deque<int> d;
    for(int i=0; i<n; i++){
        if(d.empty()) d.push_back(i); // base case for first element
        if(d.front() <= (i-k)) d.pop_front(); // remove elements outside the current window
        while(!d.empty() && arr[i] >= arr[d.back()]) d.pop_back(); // move max element to the front
        d.push_back(i);
        if(i >= (k-1)) cout << arr[d.front()] << " "; // print out only when the first window is completed
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

// using deque to reduce time complexity 
