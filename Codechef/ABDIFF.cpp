#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A, B;
	cin >> A >> B;
	int incorrect = A*B;
	int correct = A+B;
	cout << abs(incorrect-correct) << endl;
	return 0;
}
