void SortedStack :: sort()
{
   //Your code here
   stack<int>s1;
   while(!s.empty())
   {
       int x = s.top();
       s.pop();
       while(!s1.empty() && s1.top() < x)
       {
           s.push(s1.top());
           s1.pop();
       }
       s1.push(x);
   }
   while(!s1.empty())
   {
       s.push(s1.top());
       s1.pop();
   }
   
