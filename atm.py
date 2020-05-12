t=int(input())
while t>0:
    n,k=map(int,input().split())
    a=[int(o) for o in input().split()]
    i=0
    d=[0]*n
    while k>0:
        if k>=a[i]:
            k-=a[i]
            d[i]=1
        i+=1
        if i==n:
            break
        
    for i in d:
        print(i,end="")
    print() 
    t-=1
    