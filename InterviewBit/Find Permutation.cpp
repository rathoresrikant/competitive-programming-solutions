vector<int> Solution::findPerm(const string A, int B) 
{
  assert(A.length() == (B - 1));
  for(int i = 0; i < B - 1; i++) assert((A[i] == 'I') || (A[i] == 'D'));

  vector<int> ans(B); int start = 1, upto = B;
  for(int i = 0; i < B && (start < upto); i++) 
  {
      if(A[i] == 'D') ans[i] = upto--;
      else ans[i] = start++;
  }
  assert(start == upto);
  ans[B - 1] = start;
  return ans;
}