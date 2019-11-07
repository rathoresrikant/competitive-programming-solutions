import atexit
def main():
	from sys import stdin, stdout
	#from Queue import PriorityQueue
	from heapq import heappush, heappop
	def dijkstra(grafo, inicio, fim):
		#q = PriorityQueue()
		#q.put((0, inicio, ""))
		q = [(0, inicio, "")]
		
		#while not q.empty():
		while len(q) > 0:
			#j = q.get()
			custo, atual, camin = heappop(q)
			#atual = j[1]
			#custo = j[0]
			#camin = j[2]
			if atual not in vis:
				vis[atual] = True
				camin += str(atual) + " "
				if atual == fim:
					return camin
				
				for j in xrange(len(grafo[atual])):
					viz = grafo[atual][j][1]
					custo_agr = grafo[atual][j][0]
					if viz not in vis:
						custo_novo = custo + custo_agr
						#q.put((custo_novo, viz, camin))
						heappush(q, (custo_novo, viz, camin))
		return -1
	
	ver, are = map(int, stdin.readline().split())
	grafo = [ [] for i in xrange(ver+1)]
	vis = {}
	for i in xrange(are):
		x, y, p = map(int, stdin.readline().split())
		grafo[x].append((p,y))
		grafo[y].append((p,x))
	stdout.write(str(dijkstra(grafo, 1, ver)))
 
if __name__ == "__main__":
	atexit.register(main)
