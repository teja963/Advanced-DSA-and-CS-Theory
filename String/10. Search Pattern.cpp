 vector <int> search(string pat, string txt)
        {
            //code hee.
            int i,n1=txt.size(),n2=pat.size();
            vector<int>v;
            for(i=0;i<=n1-n2;i++)
            {
                string s=txt.substr(i,n2);
                if(s==pat)v.push_back(i+1);
            }
            return v;
