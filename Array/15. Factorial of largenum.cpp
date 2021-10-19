using namespace std;
int multiply(int x,int *a,int size){
    int c=0,i,p;
    for(i=0;i<size;i++){
        p=a[i]*x+c;
        a[i]=p%10;
        c=p/10;}
        
        while(c){
            a[size]=c%10;
            c/=10;
            size++;
        }
    return size;
}

int main() {
	//code
	int a[10000],size,x,t,n;
	cin>>t;
	while(t--){
	    size=1;
	    a[0]=1;
	    cin>>n;
	    for(x=2;x<=n;x++)size=multiply(x,a,size);
	    for(x=size-1;x>=0;x--)cout<<a[x];
	    cout<<"\n";
	    
	}
