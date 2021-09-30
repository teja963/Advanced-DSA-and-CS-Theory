// C++ program in-place Merge Sort
#include <bits/stdc++.h>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
// Inplace Implementation
void mergeInPlace(int a[], int l, int m, int r)
{
	// increment the maximum_element by one to avoid
	// collision of 0 and maximum element of array in modulo
	// operation
	int mx = max(a[m], a[r]) + 1;

	int i = l, j = m + 1, k = l;
	while (i <= m && j <= r && k <= r) {

		// recover back original element to compare
		int e1 = a[i] % mx;
		int e2 = a[j] % mx;
		if (e1 <= e2) {
			a[k] += (e1 * mx);
			i++;
			k++;
		}
		else {
			a[k] += (e2 * mx);
			j++;
			k++;
		}
	}

	// process those elements which are left in the array
	while (i <= m) {
		int el = a[i] % mx;
		a[k] += (el * mx);
		i++;
		k++;
	}

	while (j <= r) {
		int el = a[j] % mx;
		a[k] += (el * mx);
		j++;
		k++;
	}

	// finally update elements by dividing with maximum
	// element
	for (int i = l; i <= r; i++)
		a[i] /= mx;
}


void mergeSort(int arr[], int l, int r)
{
	if (l < r) {

		// Same as (l + r) / 2, but avoids overflow
		// for large l and r
		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		mergeInPlace(arr, l, m, r);
	}
}

// Driver Code
int main()
{
	int nums[] = { 12, 11, 13, 5, 6, 7 };
	int nums_size = sizeof(nums) / sizeof(nums[0]);

	mergeSort(nums, 0, nums_size - 1);

	for (int i = 0; i < nums_size; i++) {
		cout << nums[i] << " ";
	}
	return 0;
}

