# Problem link:https://www.codechef.com/COOK98A/problems/OETW

for x in range(int(input())):
	N = int(input())
	A = list(map(int, input().split()))
	sum_list = []

	for i in range(len(A)):
		j = 0
		while j + i + 1 <= len(A):
			s = sum(A[j:j + 1 + i])
			j += 1
			if s not in sum_list:
				sum_list.append(s)

	print(len(sum_list))