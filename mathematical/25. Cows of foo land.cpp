class Solution{
	public:
	void multiply(long long int mat[2][2],long long int m[2][2])
	{
	    long long int a,b,c,d;
	    a=(mat[0][0]*m[0][0]+mat[0][1]*m[1][0])%1000000007;
	    b=(mat[0][0]*m[0][1]+mat[0][1]*m[1][1])%1000000007;
	    c=(mat[1][0]*m[0][0]+mat[1][1]*m[1][0])%1000000007;
	    d=(mat[1][0]*m[0][1]+mat[1][1]*m[1][1])%1000000007;
	    mat[0][0]=a;
	    mat[0][1]=b;
	    mat[1][0]=c;
	    mat[1][1]=d;
	    
	}
	void mat_power(long long int mat[2][2],long long int n)
	{
	    if(n==1)return;
	    mat_power(mat,n/2);
	    multiply(mat,mat);
	    long long int m[2][2]={{1,1},{1,0}};
	    if(n%2!=0)multiply(mat,m);
	}
	int TotalAnimal(long long int N){
	    // Code here
	    long long int mat[2][2]={{1,1},{1,0}};
	    mat_power(mat,N+1);
	    return mat[0][1];
	}
