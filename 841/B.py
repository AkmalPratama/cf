for _ in range(int(input())):
    n = int(input())
    n = n * (n+1) * (4*n-1) * 337 % 1000000007;
    print(n)
