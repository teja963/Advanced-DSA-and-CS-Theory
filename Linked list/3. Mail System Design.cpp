  vector<Node*> mailDesign(int N, int Q, int query[]){
        // code here
   vector<int> u,r,t;
       for(int i=0; i<N; i++)
       u.push_back(i+1);
       
       for(int i=1; i<Q*2; i+=2)
       {
           if(query[i-1]==1)
           {
               u.erase(find(u.begin(), u.end(), query[i]));
               r.push_back(query[i]);
           }
           else if(query[i-1]==2)
           {
               r.erase(find(r.begin(), r.end(), query[i]));
               t.push_back(query[i]);
           }
           else if(query[i-1]==3)
           {
               u.erase(find(u.begin(), u.end(), query[i]));
               t.push_back(query[i]);
           }
           else 
           {
               t.erase(find(t.begin(), t.end(), query[i]));
               r.push_back(query[i]);
           }
       }
       Node* unread=NULL,*u1, *read=NULL,*r1, *trash=NULL, *t1;
       if(u.size())
               unread= new Node(u[0]);
               
       if(r.size())
         read= new Node(r[0]);
         
       if(t.size())
       trash= new Node(t[0]);
       
       u1=unread;
       r1=read;
       t1=trash;
       
       for(int i=1; i<u.size(); i++)
       {
           Node* p= new Node(u[i]);
           unread->right=p;
           p->left=unread;
           unread=p;
       }
        for(int i=1; i<r.size(); i++)
       {
           Node* p= new Node(r[i]);
           read->right=p;
           p->left=read;
           read=p;
       }
        for(int i=1; i<t.size(); i++)
       {
           Node* p= new Node(t[i]);
           trash->right=p;
           p->left=trash;
           trash=p;
       }
       
       vector<Node*> v;
       v.push_back(u1);
       v.push_back(r1);
       v.push_back(t1);
       return v;
       
   }
