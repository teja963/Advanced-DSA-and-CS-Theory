unordered_map<int,int>m;
void post(int in[], int pre[], int l, int h, int &index)
{
    if(l > h)return;
    int p = m[pre[index++]];
    post(in, pre, l, p-1, index);
    post(in, pre, p+1, h, index);
    cout<<in[p]<<" ";
}
void printPostOrder(int in[], int pre[], int n)
{
//Your code here
int index=0;
for(int i = 0; i < n; i++)m[in[i]] = i;
post(in,pre,0,n-1,index);
m.clear();    
}
