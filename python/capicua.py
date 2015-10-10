palabra = str(input("Ingrese una palabra: "))
Palindroma = palabra == palabra[::-1]
if Palindroma is True:
    print ("La palabra es palindroma")
else:
    print ("La palabra no es palindroma")
fin = input("")
