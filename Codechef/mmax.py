t=int(input())

while t:
	n=int(input())
	k=int(input())
	
	if n>k:
		s1=1;

		if (n-k) > k:
			s2=k*2
		elif (n-k)<k:
			s2=(n-k)*2
		else:
			s2=n-1
	else:
		if k%n==0:
			s1=0
			s2=0
			t=t-1
		else:
			s1=1
			r=k%n
			if (n-r) > r:
				s2=r*2
			elif (n-r)<r:
				s2=(n-r)*2
			else:
				s2=n-1

	print(s2)
	t=t-1
