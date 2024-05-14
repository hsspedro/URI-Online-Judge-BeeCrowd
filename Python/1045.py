vetor = []
A, B, C = input().split()
vetor.append(float(A))
vetor.append(float(B))
vetor.append(float(C))

vetor.sort(reverse=True)
A, B, C = vetor
def function(A, B, C):
    if A == B == C:
        print("TRIANGULO EQUILATERO")
    elif A == B != C or A == C != B or B == C != A:
        print("TRIANGULO ISOSCELES")


if A>= (B + C):
    print("NAO FORMA TRIANGULO")
elif A**2 == (B**2 + C**2):
    print("TRIANGULO RETANGULO")
elif A**2 > (B**2 + C**2):
    print("TRIANGULO OBTUSANGULO")
    function(A, B, C)
elif A**2 < (B**2 + C**2):
    print("TRIANGULO ACUTANGULO")
    function(A, B, C)
