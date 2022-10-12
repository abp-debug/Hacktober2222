#include <bits/stdc++.h>
using namespace std;

bool checkRedundant(string s){
	stack<char> st;
	int i=0,n=s.length();
	while(i<n){
		int cnt=0;
		if(!st.empty() and s[i]==')'){
			while(!st.empty() and st.top()!='('){
				// cout << st.top() << " ";
				st.pop();
				cnt++;
			}
			// cout << endl;
			if(cnt==0){
				return true;
			}
			st.pop();
		}else{
			st.push(s[i]);
		}
		i++;
	}
	return false;
}

int main(){
	string s;
	cin >> s;
	cout << checkRedundant(s);
}