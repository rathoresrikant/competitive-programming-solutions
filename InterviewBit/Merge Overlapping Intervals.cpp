/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
bool compareFnc(const Interval &a, const Interval &b)
{
    return a.start<b.start;
}

vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(), A.end(), compareFnc);
    vector<Interval> B;
    int start = A[0].start;
    int end = A[0].end;
    Interval temp;
    

    
    for(int i=0 ; i<A.size()-1 ; i++)
    {
        if(end>=A[i+1].start)
        {
            if(end<A[i+1].end)
                end = A[i+1].end;
                
            continue;
        }
        else
        {
            temp.start=start;
            temp.end=end;
            B.push_back(temp);
            start = A[i+1].start;
            end = A[i+1].end;
        }
    }
    temp.start = start;
    temp.end = end;
    B.push_back(temp);
    
    return B;
}