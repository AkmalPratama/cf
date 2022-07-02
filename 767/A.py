for _ in range(int(input())):
  n, k = map(int, input().split())
  a = list(map(int, input().split()))
  b = list(map(int, input().split()))
  l = []
  for i in range(n):
    l.append((a[i], b[i]))
  l = sorted(l, key=lambda x: x[0])
  ans = k
  for i in range(n):
    if ans >= l[i][0]:
      ans += l[i][1];
    else:
      break
  print(ans)
