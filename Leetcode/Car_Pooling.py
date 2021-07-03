class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        arr = [0]*1001
        for i in trips:
            arr[i[1]-1]+=i[0]
            arr[i[2]-1]-=i[0]
        for i in range(1,len(arr)):
            arr[i]+=arr[i-1]
        #print(arr[:8])
        for i in arr[:-1]:
            if i>capacity:
                return False
        return True
