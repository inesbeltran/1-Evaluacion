def bucle_8():
    print "El constructor de piramides"
    print "_____________________________"
    print "indica, oh faraon, de que altura deseas tu piramide"
    altura= input("altura= ")
    for fil in range (1,altura+1):
        for col in range (1, fil):
            print"*",
        print " "

        
bucle_8()
