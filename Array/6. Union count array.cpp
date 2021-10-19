using namespace std;

int main() {
	//code
	int t;
	cin >> t; 
	while(t--){
	int n, m, in, count = 0;
	cin >> n >> m;
	int arr[100001] = {0};
	for(int i = 0; i < n + m; i++){
	    cin >> in;
	    arr[in] = 1;
	}
	for(int i = 0; i < 100001; i++)
	    if(arr[i])
	        count++;
    cout << count << endl;
	}
	return 0;
}
