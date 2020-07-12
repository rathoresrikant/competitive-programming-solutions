#Given the participants' score sheet for your University
# Sports Day, you are required to find the runner-up 
#score. You are given 'n' scores. Store them in a list 
#and find the score of the runner-up. 


if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    z = max(arr)
    while max(arr) == z:
        arr.remove(max(arr))
    print( max(arr) ) 