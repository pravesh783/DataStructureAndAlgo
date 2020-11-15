#include <bits/stdc++.h>
using namespace std;

int solve(string a, string b){
    int l = a.size();
    int dp[l][l];
    
    for(int i = 0; i <= l; i++){
        for(int j = 0; j <= l; j++){
            if(i == 0 || j == 0) dp[i][j]  = 0;
        }
    }
    
    for(int i = 1; i <= l; i++){
        for(int j = 1; j <= l; j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int mn = INT_MIN;
    for(int i = 0; i <= l; i++){
        for(int j = 0; j <= l; j++){
            mn = max(mn, dp[i][j]);
        }
    }
    
    return mn;
    
    
    
}

int main() {
	
	string a,b;
	cin >> a;
    b = a;
	reverse(a.begin(), a.end());
	cout <<  solve(a, b);
	return 0;
}