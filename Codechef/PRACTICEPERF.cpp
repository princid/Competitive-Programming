#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int P,Q,R,S;
	cin >> P >> Q >> R >> S;
	int weeks=0;
	if(P>=10) weeks++;
	if(Q>=10) weeks++;
	if(R>=10) weeks++;
	if(S>=10) weeks++;
	
	cout << weeks << endl;
	return 0;
}
