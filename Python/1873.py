dicio = {"tesoura": ["papel", "lagarto"],"papel":["pedra", "spock"], "pedra":["lagarto","tesoura"],
"lagarto":["spock","papel"],"spock":["tesoura", "pedra"]}

c = int(input())

for i in range(c):
    rajesh, sheldon = input().split()
    if rajesh == sheldon:
        print("empate")
    elif sheldon in dicio[rajesh]:
        print("rajesh")
    else:
        print("sheldon")
