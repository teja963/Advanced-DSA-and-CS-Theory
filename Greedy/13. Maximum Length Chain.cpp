/*You are required to complete this method*/
bool cmp(val a, val b)
{
    return a.second < b.second;
}
int maxChainLen(struct val p[],int n)
{
//Your code here
    sort(p,p+n,cmp);
    int ans = 1;
    auto x = p[0];
    for(int i = 1; i < n; i++)
    {
        if(x.second < p[i].first)
        {
            ans++;
            x = p[i];
        }
    }
    return ans;
