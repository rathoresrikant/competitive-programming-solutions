int Solution::gcd(int a, int b) 
{
  if (a < b)
  {
    a += b;
    b = a - b;
    a -= b;
  }
      
  if (b == 0) return a;
 
  while ( a % b != 0 )
  {
    a += b;
    b = a - b;
    a -= b;
    b %= a;
  }
  return b;
}