#Calculadora da Área de Figuras Planas, Python
#May Santana, 2021

global A, B, H, R, L;

def Saida():
    Result = int(input("O resultado final é: "));
    return Result;

def AreaQuadrado():
    L = int(input("Digite o valor do lado do quadrado: "));
    A = L * L;
    print("O resultado final é: ")

def AreaTriangulo():
    B = int(input("Digite o valor da base do triângulo: "));
    H = int(input("Digite o valor da altura do triângulo: "));
    A = (B * H)/2;
    print("O resultado final é: ")

def AreaCirculo():
    π = 3
    R = int(input("Digite o valor do raio do círculo: "));
    A = π * (R * R);
    print("O resultado final é: ")

def AreaRetangulo():
    B = int(input("Digite o valor da base do retângulo: "));
    H = int(input("Digite o valor da altura do retângulo: "));
    A = B * H;
    print("O resultado final é: ")

opção = 0;

while opção != 5:
    print("Opção 1 - Área do Quadrado");
    print("Opção 2 - Área de um Triângulo");
    print("Opção 3 - Área de um Círculo");
    print("Opção 4 - Área de um Retângulo");
    print("Opção 5 - Sair");

    opção = int(input("Digite a sua opção: "));

    match opção:
       case 1: AreaQuadrado();
       case 2: AreaTriangulo();
       case 3: AreaCirculo();
       case 4: AreaRetangulo();
       case 5: print("Opção Inválida");
       case 5: break;
