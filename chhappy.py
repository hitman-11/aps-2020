# cook your dish here
t=int(input())
while t>0:
    n=int(input())
    a=[int(o) for o in input().split()]
    b=list(set(a))
    u=[]
    for i in range(len(b)):
        try:
            u.append(a[b[i]-1])
        except:
            popppp=0
    if len(u)!=len(set(u)):
        print("Truly Happy")
    else:
        print("Poor Chef")
        
    t-=1