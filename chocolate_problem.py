# Author : DEVESH VISHNOI 
# https://github.com/Devesh-vi


import matplotlib.pyplot as plt
number=int(input("Input the number: "))
#Definif a function for finding out te sequence of the next 15 moves given the first 3 moves.
#L- Moving one place left
#R- Moving one place right
#T- Moving one place upwards
#D- Moving one place downwards
def seq(a):
    l="LRTD"
    sequence=""
    sequence+=a
    k=a
    k=(k[1]+k[1]+k[0])
    sequence+=k
    for i in l:
        if i not in a:
            z=i
    k=z+a[0]+a[1]
    sequence+=k
    k=k[1]+k[0]+k[0]
    sequence+=k
    k=a[2]+z+a[0]
    sequence+=k
    return sequence
#It is found that the graph follows a particular pattern. The grapn of n resembled the graph of n-1. A function to create that pattern is defined.
def seqtwo(n):
    dd=""
    if n==1:
        return "DRT"
    if n==2:
        return seq("RDL")
    a = seqtwo(n-1)
    #d and o are the 2 patterns.
    d=""
    o=""
    for i in a:
        if i == "R":
            d+="D"
        if i == "T":
            d+="L"
        if i == "L":
            d+="T"
        if i == "D":
            d+="R"
    for i in a:
        if i == "R":
            o+="T"
        if i == "D":
            o+="L"
        if i == "L":
            o+="D"
        if i =="T":
            o+="R"
    dd=dd+d+"D"+a+"R"+a+"T"+o
    return dd

#Functions to change coordinates when moved left,right, upwards and downwards
def right(x,y):
    return (x,y+1)
def left(x,y):
    return (x,y-1)
def top(x,y):
    return (x-1,y)
def down(x,y):
    return (x+1,y)

#The answer list is created by assighning values coordinates to the output that we get from the function seqtwo
(a,b)=(1,1)
anslist=[(1,1)]

#Defining x and y for ploting 
x=[1]
y=[-1]
number= seqtwo(number)
for i in number:
    if i=="R":
        (a,b)=right(a,b)
        anslist.append(tuple((a,b)))
        y.append(-a)
        x.append(b)
    if i=="L":
        (a,b)=left(a,b)
        anslist.append(tuple((a,b)))
        y.append(-a)
        x.append(b)
    if i=="T":
        (a,b)=top(a,b)
        anslist.append(tuple((a,b)))
        y.append(-a)
        x.append(b)
    if i=="D":
        (a,b)=down(a,b)
        anslist.append(tuple((a,b)))
        y.append(-a)
        x.append(b)
print(anslist)
        
#Ploting the graph
plt.plot(x, y,marker="o",color="red")
plt.xlabel('x - axis')
plt.ylabel('y - axis')
plt.title('Graph')
plt.show()
