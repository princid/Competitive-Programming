#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int N;
	    cin >> N;
	    int count = 0, arr[N];
	    for(int i=0; i<N; i++){
	        cin >> arr[i];
	        if(arr[i]>=1000){
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
