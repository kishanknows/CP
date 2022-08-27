T = int(input())
for i in range(T):
    a,b = map(int, input().split(' '))
    if(b-a-1>=0):
        print('YES')
    else:
        print('NO')
