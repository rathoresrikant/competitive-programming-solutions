#function to call recursive function and return the final solution to it's caller function
def count_sets_dp(arr,total,n,k):
    mem={}
    return dp(arr,total,n-1,mem,k)

#recursive  and dynamic programming function to generate subsequences and find the eligible subsequence
def dp(arr,total,i,mem,k):
    key=str(total)+':'+str(k)+':'+str(i)
    if key in mem:
        return mem[key]
    if total==0 and k==0:
        return 1
    elif total<0 or k<0:
        return 0
    elif i<0:
        return 0
    elif total<arr[i]:
        to_return=dp(arr,total,i-1,mem,k)
    else:
        to_return=(dp(arr,total-arr[i],i-1,mem,k-1)+dp(arr,total,i-1,mem,k))
    mem[key]=to_return
    return to_return
#loop through all testcases and call the count_sets_dp funtion
for t in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(a)
    b.sort()
    min_sum=sum(b[:k])
    print(count_sets_dp(a,min_sum,n,k))