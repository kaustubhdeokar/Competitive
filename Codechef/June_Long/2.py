def sod(n):
    s=0
    while(n!=0):
        s+=n%10
        n//=10
    return s

if __name__=="__main__":
    t=int(input())
    for _ in range(t):
        a=190
        n=int(input())
        units=sod(n)
        tens=n*10
        total=tens+10-(units%10)
        print(total)