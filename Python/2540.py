def impeachment(votos_sim, total):
    if votos_sim / total >= 2/3:
        print("impeachment")
    else:
        print("acusacao arquivada")
while True:
    try:
        contador = 0
        N = int(int(input()))
        votes = input().split()
        votes = map(int, votes)

        for vote in votes:
            contador += vote

        impeachment(contador, N)
    except EOFError:
        break
