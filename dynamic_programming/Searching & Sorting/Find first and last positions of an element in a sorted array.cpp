/*
Problem link
https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x/
*/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    int list[n];
	    int first = -1, second = -1;
	    for(int i = 0; i < n; i++) cin >> list[i];
	    for(int i = 0; i < n; i++) {
	   
	        if(list[i] == x){
	            first = i;
	            break;
	        }
	    }
	    
	    for(int i = n-1; i >= 0; i--) {
	   
	        if(list[i] == x){
	            second = i;
	            break;
	        }
	    }
	    if(first > -1 && second < n){
	        cout << first << " " << second << endl;
	    }
	    else cout << "-1\n";
	}
	return 0;
}