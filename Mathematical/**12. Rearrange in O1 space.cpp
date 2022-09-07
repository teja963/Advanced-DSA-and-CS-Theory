/*Remember whenever we are given to modify the array (interchanging elements ) with constant space The best way is Use a number as two numbers

Example suppose num1 is 3 and num2 is 7
We will take a num c = 3+ 7*(3+7) = 73
Since we did addition with 3 so for getting 3 out of 73
Do 73 mod (3+7) = 3
We divided by 10 so to get 7 out of 73 do
73 // 10 = 7

Hence tow numbers a and b can be represented as c by using formulae

c = a + b * (a +b )-----> say (a+b) is maxx
#For Array we take maxx= max(arr)+1
*/


void arrange(long long arr[], int n) {
for (int i = 0; i < n; i++)arr[i] += (n * (arr[arr[i]] % n));
for (int i = 0; i < n; i++)arr[i] /= n;
