T = int(input())
for i in range(T):
    a,b,c = map(int, input().split(' '))
    if(a%3==0):
        print(b*a+(a//3-1)*c)
    else:
        print(a*b+(a//3)*c)
