a = input()
b = input()

if a!=b and (len(a)!=len(b) or a.count('0') == len(a) or b.count('0') == len(b)):
    print('NO')
else:
    print('YES')
