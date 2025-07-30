a=int(input("Enter the digit: "));r=0;temp=0
temp=a
while a>0:
    r=r*10+a%10
    a//=10
if (temp==r): print("Palinrome")
else: print("Not Palindrome")