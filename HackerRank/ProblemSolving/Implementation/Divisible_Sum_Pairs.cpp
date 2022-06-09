/*
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n - length of array
 *  2. INTEGER k - the number 
 *  3. INTEGER_ARRAY ar
 */
// Time comp. -> O(n^2)
int divisibleSumPairs(int n, int k, vector<int> ar) {
    int c=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((ar[i]+ar[j]) % k ==0) c++;
        }
    }
    return c;
}
//Time comp -> O(n+k)
using namespace std;
int main(){
   
   int n;
   int k;
   cin >> n >> k;
   int a[n];
   int m[k];
   for(int i=0; i<k; i++)
       m[i]=0;
    for(int i = 0; i < n; i++){
       cin >> a[i];
        m[a[i]%k]++;
    }
    int sum=0;
    sum+=(m[0]*(m[0]-1))/2;
     for(int i=1; i<=k/2 && i!=k-i; i++){
         sum+=m[i]*m[k-i];
     }
    if(k%2==0)
        sum+=(m[k/2]*(m[k/2]-1))/2;
    cout<<sum;
    return 0;
}

//Time comp -> O(n) in Java
int count = 0;
for(int a_i=0; a_i < n; a_i++){
    cin >> number;
    number = number % k;
    int complement = number == 0 ? k : number;
     count += a[k-complement];
     a[number] += 1;
}
