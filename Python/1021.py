din = float(input())
def notas(dinheiro):
    global num
    notas = [100, 50, 20, 10, 5, 2]
    for i in notas:
        num = int(dinheiro / i)
        print(f"{num} nota(s) de R$ {i}.00")
        dinheiro = dinheiro - (num*i)
    return dinheiro


moedas = [1, 0.50, 0.25, 0.10, 0.05, 0.01]

print("NOTAS:")
din = notas(din)

print("MOEDAS:")
for i in moedas:
    num = int(round(din,2)/ i)
    print(f"{num} moeda(s) de R$ {i:.2f}")
    din = din - (num*i)
