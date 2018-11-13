def cambio_de_moneda():
    x= input("Cuanto dinero quieres cambiar? ")
    y= raw_input("Quieres cambiarlo a dolares o libras ")
    if (y == "dolares"):
        print "Son equilaventes "+ str(x*1.15) + " dolares"
    else:
        print "Son equivalentes " + str(x*0.88) + " libras"

cambio_de_moneda()
