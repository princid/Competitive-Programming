#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	int X;
	
	cin >> T;
	
	while(T--)
	{
	    cin >> X;
	    
	    if(X > 300)
            cout << X*10 << endl;
	    else
            cout << 3000 << endl;
	}
	
	return 0;
}
