/*
Link to problem: https://leetcode.com/problems/median-of-two-sorted-arrays/
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int index1=0;
        int index2=0;
        
        while(index1<nums1.size() && index2<nums2.size()){
            if(nums1[index1]<=nums2[index2]){
                v.push_back(nums1[index1++]);
            }
            else{
                v.push_back(nums2[index2++]);
            }
        }
        if(index1<nums1.size()){
            while(index1<nums1.size()){
                v.push_back(nums1[index1++]);
            }
        }
        
        if(index2<nums2.size()){
            while(index2<nums2.size()){
                v.push_back(nums2[index2++]);
            }
        }
        nums1.clear();
        nums2.clear();
        
        if(v.size()%2==0){
            double n1,n2;
            n1=v[v.size()/2];
            n2=v[(v.size()/2)-1];
            //cout<<" "<<n1<<" "<<n2<<endl;
            return (n1+n2)/2;
        }
        return v[int(v.size()/2)];
    }
};