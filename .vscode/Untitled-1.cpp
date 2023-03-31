

A continuación se muestra un ejemplo de código para esta aplicación:

def mayor_y_menor(nums): 
    mayor = nums[0] 
    menor = nums[0] 

    for num in nums: 
        if num > mayor: 
            mayor = num 
        if num < menor: 
            menor = num

    return (mayor, menor)


numeros = [2, 4, 6, 8, 10] 
mayor, menor = mayor_y_menor(numeros) 
print("El número mayor es", mayor) 
print("El número menor es", menor)