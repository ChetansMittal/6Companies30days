// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		

string FirstNonRepeating(string A){
    string ans;
    int n = A.size();
    int i=0, j=0;
   vector<int> v(26);
   while(j<n){ 
       v[A[j]-'a']++;
   while(i<=j && v[A[i]-'a'] !=1){
       i++;
   } 
   if(i>j){
     ans += '#';
     j++;
     continue;
   }
   if(v[A[i]-'a'] == 1) {
       ans += A[i];
   }
    j++;
 }
return ans;
}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends