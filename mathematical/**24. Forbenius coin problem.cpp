Given two coins of denominations “X” and “Y” respectively, find the largest amount that cannot be obtained using these two coins (assuming infinite supply of coins) followed by the total number of such non obtainable amounts, if no such value exists print “NA”.

When the number of coins is two, there is 
explicit formula if GCD is not 1. The formula
is:
  Largest amount A = (X * Y) - (X + Y)
  Total amount = (X -1) * (Y - 1) /2 
