n = int(input())
v = [int(x) for x in input().split()]
maximo = max(v) # Obtenemos el valor maximo
ans = max([x if x < maximo else 0 for x in v]) # Filtramos los que son menores estrictos que el maximo y obtenemos el maximo del arreglo depurado
print(ans)
