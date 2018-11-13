def bucle_10():
    nfinal=input("hasta que numero quieres sumar")
    suma_par=0
    suma_impar=0
    for numero in range(1,nfinal+1):
        if(numero%2==0):
            print str(numero), "es par"
            suma_par=suma_par+numero
        else:
            print str(numero), "es impar"
            suma_impar=suma_impar+numero
    print "he contado", numeros_pares, " numeros par"
    print "he contado", numeros_impar, "numeros impar"
    print "la suma de los numeros pares es ",suma_par
    print "la suma de los numeros es impares  es", suma_impar

bucle_10()
