import matplotlib.pyplot as plt
y=[]
x1 = []
x2 = []
with open("hometask.txt") as f:
    for line in f:
        z=[float(x) for x in line.split()]
for i in range(0,len(z)-1,2):
        x1.append(z[i])
        x2.append(z[i+1])
for i in range(0,len(x2)*10,10):
    y.append(i)
print(len(x1),len(x2),len(y))
plt.plot(x1,y,label="Va")
plt.xlabel("V")
plt.ylabel("Ra")
plt.plot(x2,y,label="Vomega")
plt.xlabel("V")
plt.ylabel("Ra")
plt.title("Graph Va Vomega")
plt.legend()
plt.show()