T = int(input())
for i in range(T):
    a, b, c, d = map(int, input().split(' '))
    if(c<d):
        print(a*c)
    else:
        print(b*c+(a-b)*d)
