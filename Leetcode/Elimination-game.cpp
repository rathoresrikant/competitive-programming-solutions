/*
Time Complexity : O(log N)
Space Complexity : O(log N)
*/

//Author : Deepak Mehrotra (StealthX2k20)

class Solution {
public:

/*
  if direction is 0 that means we are going from left to right
  otherwise we are going from right to left
*/

int find_ans(int first, int last, int direction, int diff)
{
    if(first == last) return first; // we have a single element remaining

    if(first + diff == last) // we have 2 elements remaining
    {
        return (direction == 0 ? last : first); // return the element which will not get removed
    }

    int len = 1 + ((last - first) / diff); // find length of remaining segment

    if(len & 1) // check if len is odd
    {
        return find_ans(first + diff, last - diff, direction ^ 1, diff * 2);
    }

    else // len is even
    {
        if(!direction) // if direction is 0 then we are going from left to right -> -> ->
        {
            return find_ans(first + diff, last, direction ^ 1, diff * 2);
        }

        else // if direction is 1 then we are going from right to left <- <- <-
        {
            return find_ans(first, last - diff, direction ^ 1, diff * 2);
        }
    }
}

    int lastRemaining(int n)
    {
        return find_ans(1, n, 0, 1); /* initially we have segment from 1, 2, 3 .. n and we have to go from left to right and our initial difference is 1                                      */
    }
};
