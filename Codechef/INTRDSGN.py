T=int(input())
for i in range(T):
    a,b,c,d=map(int,input().split(' '))
    if((a+b)<(c+d)):
        print(a+b)
    else:
        print(c+d)

