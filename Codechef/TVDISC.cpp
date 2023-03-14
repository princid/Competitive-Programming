#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int a,b,c,d;
	    0<=c && c<=a;
	    0<=d && d<=b;
	    cin >> a >> b >> c >> d;
	    int first_TV = a-c;
	    int second_TV = b-d;
	    
	    if(first_TV < second_TV) cout << "FIRST" << endl;
	    else if(first_TV > second_TV) cout << "SECOND" << endl;
	    else cout << "ANY" << endl;
	}
	return 0;
}
