class Solution:
    # @param A : list of integers
    # @return an integer
    def candy(self, A):
        aux=[1]*len(A)
        
        for i in range(len(A)-1):
            if A[i]<A[i+1]:
                aux[i+1]=aux[i]+1
        
        for i in range(len(A)-2,-1,-1):
            if A[i]>A[i+1] and aux[i]<=aux[i+1]:
                aux[i]=aux[i+1]+1
        
        return sum(aux)
