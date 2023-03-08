#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int H,X,Y;
	    cin >> H >> X >> Y;
	    1<=X && X<Y && Y<=H && H<=100;
	    
	    H = H-Y;
	    
	    if(H%X==0) cout << 1 + H/X << endl;
	    else cout << 2 + H/X << endl;
	}
	return 0;
}
