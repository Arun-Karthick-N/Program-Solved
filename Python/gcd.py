def gcd(a,b):
    while(a>0 and b>0):
        if(a>b):
            a=a%b
        else:
            b=b%a
    if(a==0):return b
    else: return a;    

a,b=map(int,input("Enter the numbers n1 and n2:").split())
print(gcd(a,b),"is the GCD of",a,"and",b)
