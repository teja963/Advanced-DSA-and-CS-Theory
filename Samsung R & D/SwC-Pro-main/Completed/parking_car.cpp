/*
Basically there is a matrix of size M x M where N cars are there. They are at a starting position xi, yi. 
You have to park them at some position in the matrix (p, q) in minimum number of drives. 
If it is not possible to park them in matrix (p,q) then return -1. 

The restrictions are:
You have to move all the cars simultaneously.
You can move 1 distance exactly in 1st drive, 2 distance in 2nd drive and so on.
The paths of cars can overlap.

M range till ±10^17
N range till 100
*/
#include<bits/stdc++.h>
#define ll long long
#define MAXN 100

using namespace std;

ll a[MAXN];

ll parity(ll n) {
	// finding the max distance that we have to reach
	ll x = *max_element(a, a + n);

	// finding number of drives / turns it will take to reach or cross the max distance
	ll turns = (ll)ceil((sqrt(1 + 8 * x) - 1 ) / 2);

	// finding the actual distance reached for the above number of turns
	ll actual = (turns * (turns + 1)) / 2;

	// replacing the distances with the parity of the difference between distance reached and the distance to be reached
	for(int i = 0; i < n; i++)
		a[i] = (actual - a[i]) & 1;

	// returning the turns for the answer
	return turns;
}

void solve(){
	ll n, m;
	cin >> n >> m;

	ll p, q, x, y;
	cin >> p >> q;
	for(int i = 0 ; i < n; i++) {
		cin >> x >> y;

		// calculating the min distace to reach the center
		a[i] = abs(max(p, x) - min(p, x)) + abs(max(q, y) - min(q, y));
	}

	// converting the array to the parity array of extra distance as well as returning the turns 
	ll turns = parity(n);

	for(int i = 0; i < n; i++) {
		if(a[0] != a[i]){
			cout << -1 << "\n";
			return;
		}
	}

	// if the parity of the distance array is 1 and the turns is also 1 then in the next turn it will be even.
	// we cannot filp in even turns, so we need 2 extra turns.
	if(a[0] && turns & 1)
		cout << turns + 2 << "\n";

	// else we can filp in the next turn
	else if(a[0])
		cout << turns + 1 << "\n";

	// else we are already at the destination
	else
		cout << turns << "\n";

}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t, cnt = 1; 
	cin >> t;
	while(t--){
		cout << "# " << cnt << " ";
		solve();
		cnt++;
	}
}
