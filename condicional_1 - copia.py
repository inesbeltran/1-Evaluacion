def condicional_1():
    nombre= raw_input("Dime tu nombre ")
    respuesta= raw_input(nombre + " vienes o te vas ")
    if(respuesta == "voy"):
        print "Hola " + nombre
    else:
        print "Adi�s " + nombre

condicional_1()
