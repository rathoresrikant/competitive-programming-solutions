
t = int(input())

while t:
    n, k = [int(x) for x in input().split()]

    arr = [int(x) for x in input().split()]
    s = arr.count(-1)

    if k == 2:
        if n % 2 == 0:
            a = [1, 2] * (n//2)
            b = [2, 1] * (n//2)
        else:
            a = [1, 2] * ((n-1)//2)
            b = [2, 1] * ((n-1)//2)
            a.append(1)
            b.append(2)
        f_A = True
        f_B = True
        for i in range(n):
            if arr[i] != -1:
                if f_A == True:
                    if arr[i] != a[i]:
                        f_A = False
                if f_B == True:
                    if arr[i] != b[i]:
                        f_B = False

        if f_A:
            print('YES')
            print(*a)
        elif f_B:
            print('YES')
            print(*b)
        else:
            print('NO')
    else:
        r = arr.count(-1)
        if r == 0:
            f = True
            for i in range(1, n):
                if arr[i-1] == arr[i]:
                    f = False
                    break

            if f:
                print('YES')
                print(*arr)
            else:
                print('NO')
        elif r == n:
            x = []
            if n % 2 == 0:
                x = [1, 2] * (n // 2)
            else:
                x = [1, 2] * ((n-1) // 2)
                x.append(1)
            print('YES')
            print(*x)
        else:
            start = 0
            end = n-1
            ans = []
            t_end = []
            t_start = []
            if arr[start] == -1:
                while start < n and arr[start] == -1:
                    start += 1
                if start < n:
                    a = [i for i in range(1, 4) if i != arr[start]]
                    if start % 2 == 0:
                        t_start = [a[0], a[1]] * (start // 2)
                    else:
                        t_start = [a[0], a[1]] * ((start-1)//2)
                        t_start.append(a)
            
            if  start < n and arr[end] == -1 :
                while end >= 0 and arr[end] == -1:
                    end -= 1
                a = [i for i in range(1, 4) if i != arr[end]]
                ct = (n - end - 1)
                if ct % 2 == 0:
                    t_end = [a[0], a[1]] * (ct // 2)
                else:
                    t_end = [a[0], a[1]] * ((ct-1)//2)
                    t_end.append(a[0])
            
            print('YES')
            if start == n:
                print(*t_start)
            else:
                count = 0
                ans = t_start + [arr[start]]
                track = arr[start]
                for i in range(start+1, end+1):
                    if arr[i] == -1:
                        count += 1

                    if arr[i-1] == -1 and arr[i] > 0:
                        a = [i for i in range(1, 4) if i not in [track, arr[i]]]

                        if len(a) >= 2:
                            if count % 2 == 0:
                                ans = ans + ([a[0], a[1]] * (count // 2)) 
                            else:
                                ans = ans + ([a[0], a[1]] * ((count-1) // 2)) 
                                ans.append(a[0])
                        else:
                            if count % 2 == 0:
                                ans = ans + ([a[0], track] * (count // 2))
                            else:
                                ans = ans + ([a[0], track] * ((count-1) // 2)) 
                                ans.append(a[0])

                    if arr[i] > 0:
                        track = arr[i]
                        count = 0
                        ans.append(arr[i])

                ans = ans + t_end
                print(*ans)

    t -= 1
