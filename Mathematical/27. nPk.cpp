// A O(n) time and O(1) extra
// space solution to calculate
// the Permutation Coefficient
#include <iostream>
using namespace std;

int PermutationCoeff(int n, int k)
{
	int P = 1;

	// Compute n*(n-1)*(n-2)....(n-k+1)
	for (int i = 0; i < k; i++)
		P *= (n-i) ;

	return P;
}

// Driver Code
int main()
{
	int n = 10, k = 2;
	cout << "Value of P(" << n << ", " << k
		<< ") is " << PermutationCoeff(n, k);

	return 0;
}
