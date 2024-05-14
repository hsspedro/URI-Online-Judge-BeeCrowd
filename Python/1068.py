def contar(entrada):
    vetor = []
    for i in range(len(entrada)):
        if entrada[i] == '(':
            vetor.append('(')
        elif entrada[i] == ')':
            if len(vetor) > 0:
                vetor.pop()
            else:
                vetor.append(')')
                break
    if len(vetor) == 0:
        return True
    else:
        return False
        

while True:
    try:
        entrada = input()
        if contar(entrada):
            print("correct")
        else:
            print("incorrect")
    except EOFError:
        break
