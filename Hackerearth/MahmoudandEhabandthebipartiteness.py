import atexit
def main():
	from collections import defaultdict
	from sys import stdin, stdout
	
	def solve(visitados, cores):
		fila = [(1, 0)]
		while len(fila) > 0:
			vert, cor = fila.pop()
			visitados.add(vert)
			cores[cor] += 1
			
			for aresta in grafo[vert]:
				if aresta not in visitados:
					fila.append((aresta, 1 - cor))
		return
	
	
	n = int(stdin.readline())
	grafo = defaultdict(list)
	for i in xrange(n-1):
		x, y = map(int, stdin.readline().split())
		grafo[x].append(y)
		grafo[y].append(x)
	
	cores = [0, 0]
	visitados = set()
	res = solve(visitados, cores)
	stdout.write(str(cores[0] * cores[1] - n + 1))
 
if __name__ == "__main__":
	atexit.register(main)
