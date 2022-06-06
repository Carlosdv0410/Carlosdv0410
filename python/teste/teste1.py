from tkinter import W
from tokenize import Double
from unittest import case
import os
import time

oper = float
while oper != 0:
    os.system('cls') or None
    print("-----------")
    print("CALCULADORA")
    print("-----------")

    oper = int(input("[1]Soma\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n[0]Sair\nResposta: "))


    if(oper == 1):
        n1 = float(input("Digite um valor: "))
        n2 = float(input("Digite outro valor: "))
        print("O resultado da operação é: ", n1+n2)
        time.sleep(2)
    elif(oper == 2):
        n1 = float(input("Digite um valor: "))
        n2 = float(input("Digite outro valor: "))
        print("O resultado da operação é: ", n1-n2)
        time.sleep(2)
    elif(oper == 3):
        n1 = float(input("Digite um valor: "))
        n2 = float(input("Digite outro valor: "))
        print("O resultado da operação é: ", n1*n2)
        time.sleep(2)
    elif(oper == 4):
        n1 = float(input("Digite um valor: "))
        n2 = float(input("Digite outro valor: "))
        print("O resultado da operação é: ", n1/n2)
        time.sleep(2)
    else:
        print("Saindo...")
        time.sleep(1)
        exit()
