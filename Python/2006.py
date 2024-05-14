tipo = str(input())
valores = list(input().split())
soma = 0

for acertos in valores:
    if acertos == tipo:
        soma += 1
        
print(soma)
