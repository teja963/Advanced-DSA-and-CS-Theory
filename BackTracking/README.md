# BackTracking Overview
  <pre>
  <b><a href="https://github.com/teja963/DSA_All_Models/blob/master/BackTracking/3.%20generate%20parenthesis.cpp">Generate parenthesis</a></b>
  for n we get (2n C n)/(n+1)
  we will make open(n) and close(0) parameter
  if(open)call(open-1,close+1)
  if(close)call(open,close-1) 
  </pre>
# NOTE
  <pre>
  write logic in step tables with proper index format and implment
  </pre>
