using namespace std;
void solve(){
    int n, X;
    cin >> n >> X;
    X = abs(X);
    int in;
    unordered_set<int> s;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
            s.insert(a[i]);
    }
    for(int i = 0; i< n; i++){

            if(s.find(a[i] + X) != s.end()){
                cout << "1\n";
                return;
            }
        }
    cout << "-1\n";
    
}
int main() {
	//code
	int t;
	cin >>t;
	while(t--)
	    solve();
	return 0;
