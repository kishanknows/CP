T = int(input())
for i in range(T):
    a, b, c = map(int, input().split(' '))
    if(a%(b*c)!=0):
        print(a//(b*c)+1)
    else:
        print(a//(b*c))
