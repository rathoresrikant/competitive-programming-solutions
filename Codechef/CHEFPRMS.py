def crivo(n):
  ehprimo = [True]*(n+1)
	ehprimo[0] = False
	ehprimo[1] = False
	for i in xrange(2, len(ehprimo)):
		if ehprimo[i]:
			for j in xrange(2*i, len(ehprimo), i):
				ehprimo[j] = False
	aux = []
	for i in xrange(len(ehprimo)):
		if ehprimo[i]:
			aux.append(i)
	return aux
	
def verifica(primos, val):
	for i in primos:
		for j in primos:
			if i != j and i * j == val:
				return True
	return False

t = int(raw_input())
for i in xrange(t):
	n = int(raw_input())
	primos = crivo(n)
	k, j = 2, n
	aux = False
	
	while True:
		if k > j:
			break
		elif k + j > n:
			j -= 1
		elif k + j < n:
			k += 1
		elif k + j == n:
			a = verifica(primos, k)
			b = verifica(primos, j)
			if a and b:
				aux = True
				break
			else:
				k += 1
	if aux:
		print "YES"
	else:
		print "NO"
