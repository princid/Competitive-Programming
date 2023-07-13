#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int dd = (s[0] - '0')*10 + (s[1] - '0');
	    int mm = (s[3] - '0')*10 + (s[4] - '0');
	    
	    if(dd > 12) cout << "DD/MM/YYYY" << endl;
	    else if(mm > 12) cout << "MM/DD/YYYY" << endl;
	    else cout << "BOTH" << endl;
	}
	return 0;
}
