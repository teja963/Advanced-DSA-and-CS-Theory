// CPP program to check if a number
// can be expressed as a^b.
#include <bits/stdc++.h>
using namespace std;

bool isPower(int a)
{
	if (a == 1)
		return true;

	for (int i = 2; i * i <= a; i++) {
		double val = log(a) / log(i);
		if ((val - (int)val) < 0.00000001)
			return true;
	}

	return false;
}

// Driver code
int main()
{
	int n = 16;
	cout << (isPower(n) ? "Yes" : "No");
	return 0;
}
