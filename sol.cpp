#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s, s2;
	cin >> s;
	cin.ignore();
	getline(cin, s2);
	bool ch = false;
	for(int i = 0; i < (int)s.size(); i++){
		for(int j = 0; j < (int)s2.size(); j++){
			if(s[i] == s2[j]){
				ch = true;
			}
		}
	}
	if(ch){
		cout << "YES";
	} else{
		cout << "NO";
	}
	cout << "\n";
	return 0;
}
