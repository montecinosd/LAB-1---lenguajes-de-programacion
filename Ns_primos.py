
def Validar_primo(n):
    if (n < 1 ):
        return False
    elif (n == 2):
        return True
    else:
        for i in range(2,n):
            if ( n % i == 0):
                return False

        return True

cont = 0;
numero_inicial = 5000000
while (cont < 20):
    if(Validar_primo(numero_inicial) == True):
        cont = cont+1
        numero_inicial = numero_inicial + 1
        print ('primo' +str(numero_inicial))
        print ('cont' +str(cont))

    else:
        numero_inicial = numero_inicial + 1
        #print ('no primo ' + str(numero_inicial))

