#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[], int size)
{
    int i, c = 1, m = 0;
    if(size == 1)return a[0];
    else{
		for(i = 1; i < size; i++){
		    if(a[m] == a[i])c++;
		    else c--;
		    if(c == 0){m = i; c=1;}
		 }
		c = count(a, a+size, a[m]);
		if(c > size/2)return a[m];
		else return -1;
    }    
}

