/*As discussed in above post, frequency of element at i-th index is given by (i+1)*(N-i), where N is the size of the array
There are 4 cases possible:
Case 1: i is odd, N is odd 
Let i = 2k+1, N = 2m+1 
freq[i] = ((2k+1)+1)*((2m+1)-(2k+1)) = 4(m-k)(k+1) = even
Case 2: i is odd, N is even 
Let i = 2k+1, N = 2m 
freq[i] = ((2k+1)+1)*((2m)-(2k+1)) = 2(k+1)(2m-2k-1) = even
Case 3: i is even, N is odd 
Let i = 2k, N = 2m+1 
freq[i] = ((2k)+1)*((2m+1)-(2k)) = 2k(2m-2k+1)+(2m-2k)+1 = odd
Case 4: i is even, N is even 
Let i = 2k, N = 2m 
freq[i] = ((2k)+1)*((2m)-(2k)) = 2(m-k)(2k+1) = even
From this, we can conclude that if total no.of elements in the array is even, then frequency of element at any position is even. So total XOR will be 0. And if total no. of elements are odd, then frequency of elements at even positions are odd and add positions are even. So we need to find only the XOR of elements at even positions. 
*/
if(n%2==0)return 0;
else{
int ans=0;
for(int i=0;i<n;i+=2)ans^=a[i];
