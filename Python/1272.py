n = int(input())

for i in range(n):
    texto = input().strip()
    oculto =''
    
    for p in texto.split():
        pl = p[0]
        oculto += pl
        
    print(oculto)
