#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N;
	    cin >> N;
	    int A[N];
	    
	    unordered_map<int,int> map;
	    for(int i = 0; i<N; i++){
	        cin >> A[i];
	        map[A[i]]++;
	    }
	    if(N==1){
	        cout << 0 << endl;
	        continue;
	    }
	    int min_count = 0;
	    int min_value = INT_MAX;
	    for(auto i: map){
	        if(i.first < min_value){
	            min_value = i.first;
	            min_count = i.second;
	        }
	    }
	    cout << (N - min_count) << endl;
	}
	return 0;
}
