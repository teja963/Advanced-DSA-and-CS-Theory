int countRev (string s)
{
    // your code here
    int close=0,open=0;
    if(s.size()%2)return -1;
    for(auto x:s)
    {
        if(x=='{')open++;
        else if(open&&x=='}')open--;
        else close++;
    }
    return ceil((open+1)/2)+ceil((close+1)/2);
}
