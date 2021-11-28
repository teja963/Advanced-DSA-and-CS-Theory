int countTriplets(struct Node* head, int x) 
{ 
    // code here.
    unordered_map<int,int>m;
    int count=0;
    for(auto i=head;i;i=i->next)
    {
        for(auto j=i->next;j;j=j->next)
        {
            if(m[max(0,x-i->data-j->data)])count++;
        }
        m[i->data]=1;
    }
    return count;
    
} 
