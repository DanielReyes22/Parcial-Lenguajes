import time

inicio = time.time()

suma = sum(range(1, 100000001))

fin = time.time()
tiempo = fin - inicio

print(f"Suma total: {suma}")
print(f"Tiempo de ejecución en Python: {tiempo:.6f} segundos")
