# Priority queue usage
  <pre>
  Max:- priority_queue<int>pq;
        priority_queue<pair<int,int>>pq;
        priority_queue<pair<int,pair<int,int>>>pq;
  Min:- priority_queue<int,vector<int>,greater<int>>pq;
  </pre>
  
  <pre>
# Multimap
  <pre>
  multimap<data type, data type>m;  //by default asc order
  multimap<data type, data type, greater<data type>>m; //sort according to datatype in greater
  Multimap is similar to map with an addition that multiple elements can
  have same keys. Also, it is NOT required that the key value and mapped 
  value pair has to be unique in this case. One important thing to note about
  multimap is that multimap keeps all the keys in sorted order always
  </pre>
