#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N,X;
	    cin >> N >> X;
	    int arr[N], count = 0;
	    for(int i = 0; i<N; i++){
	        cin >> arr[i];
	        if(arr[i] >= X) count++;
	    }
	    cout << count << endl;
	}
	return 0;
}
