a=int(input("Enter the digit: "));r=0
while a>0:
    r=r*10+a%10
    a//=10
print("Reverse of the number is:",r)
