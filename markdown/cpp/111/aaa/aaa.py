class function:
    def __init__(self,a,name,b):
        self.a = a
        self.name = name
        self.b = b
    def show(self,k):
        print(k)
        print(self.name+'(',end='')
        for i in range(len(k)):
            if i == len(k)-1:
                print(k[i],end = '')
                break
            print(k[i],end = ',')
        print(')')
    def show_bin(self,s):
        L = [0]*len(self.b)
        top = 0
        for i in self.b:
            if i == 'i':
                L[top] = int(s[0:8],16)
                top += 1
                s = s[8:]
            if i == 's':
                n = int(s[0:2],16)
                L[top] = s[2:n+2]
                s = s[n+2:]
                top += 1
        self.show(L)
        return s
n = int(input())
func = []
for i in range(n):
    a = input()

    j,name,b = a.split(' ')
    x = function(int(j),name,b)
    func.append(x)
data = input()

while(data):
    i = int(data[0:2],16)
    data = data[2:]
    print(data)
    data = func[i].show_bin(data)
    
    