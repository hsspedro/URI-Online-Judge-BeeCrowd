dic = {'0':6,'1':2,'2':5,'3':5,'4':4,'5':5,'6':6,'7':3,'8':7,'9':6}
vetor = []
n = int(input())

for i in range(n):
    v = str(input())
    vetor.append(v)

for l in vetor:
    soma = 0
    for k in l:
        soma += dic[k]
    print(f'{soma} leds')
