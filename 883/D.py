def tri(a, b):
	return a * b / 2
	
def tra(a, b, c):
	return (a + b) * c / 2

def solve():
	n, d, h = list(map(int, input().split()))
	y = list(map(int, input().split()))
	ans = tri(d, h)
	for i in range(n-1):
		if (y[i] + h) <= y[i+1]:
			ans += tri(d, h)
		else:
			d2 = d * (y[i] + h - y[i+1]) / h
			h2 = y[i+1] - y[i];
			ans += tra(d, d2, h2)
	print(ans)

for _ in range(int(input())):
	solve()
