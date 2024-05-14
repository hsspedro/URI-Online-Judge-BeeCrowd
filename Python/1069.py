N = int(input())

for i in range(N):
    caseTeste = input()
    diamante = 0
    menor = 0
    for j in range(len(caseTeste)):
        if(caseTeste[j] == "<"):
            menor += 1
        if(caseTeste[j] == ">" and menor > 0):
            diamante += 1
            menor -=1
    print(diamante)
