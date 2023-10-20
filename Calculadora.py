#Calculadora, Python
#May Santana, 2021

global R, A, B;

def Entrada():
    A = int(input("Informe o valor de A: "));
    B = int(input("Informe o valor de B: "));

def Saída():
    R = int(input("O resultado final é: "));
    return R;

def ResultSoma(A, B):
    Entrada();
    R = A + B; 
    Saída();

def ResultSubtração(A, B):
    Entrada();
    R = A - B;
    Saída();

def ResultMulti(A, B):
    Entrada();
    R = A * B;
    Saída();

def ResultDivisão(A, B):
    Entrada();
    R = A/B;
    Saída();

opção = 0;

while opção != 5:
    print("1 - Soma");
    print("2 - Subtração");
    print("3 - Multiplicação");
    print("4 - Divisão");
    print("5 - Sair");

    opção = int(input("Digite a sua opção: "));

    match opção:
         case 1: ResultSoma();
         case 2: ResultSubtração();
         case 3: ResultMulti();
         case 4: ResultDivisão();
         case _: print("Opção Inválida");
