line=raw_input()
b=line.split(' ')
n=int(b[0])
w=int(b[1])
t=int(b[2])
r=int(b[3])
x=1;
for i in range (2,n+1):
    x=x*i
y=1;
for i in range (2,w+1):
    y=y*i
z=1;
for i in range (2,t+1):
    z=z*i
a=1;
for i in range (2,r+1):
    a=a*i
x=x/(y*a*z)
x=x%1000000007
print x
