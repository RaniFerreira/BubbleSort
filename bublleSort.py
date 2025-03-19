def bubble_sort(lista):
    n = len(lista)
    for i in range(n):
        for j in range(n - 1 - i):
            if lista[j] > lista[j + 1]:  
                lista[j], lista[j + 1] = lista[j + 1], lista[j]  

numeros = [64, 34, 25, 12, 22, 11, 90]
bubble_sort(numeros)
print("Lista ordenada:", numeros)
