#include <bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long int
#define pb push_back

bool isPrime(ll n) {
	if (n==1)
		return false;
	for(ll i = 2; i*i <= n; i++) {
		if (n%i == 0)
			return false;
	}
	return true;
}

int main() {
	fast
	#ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
  
	#endif 
	
	ll n; 
	cin>>n;
	cout<<isPrime(n)<<endl;
	
	return 0;
}

