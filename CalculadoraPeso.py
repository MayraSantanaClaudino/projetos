#Calculadora de Peso para Homem e Mulher, Python
#May Santana, 2021

global altura;

def PesoMulher(altura):
    resultado = int(72.7*altura) - 58;
    print("Seu peso ideal é: ", str(resultado));
 
def PesoHomem (altura):
    resultado = int(62.1*altura) - 44.7;
    print("Seu peso ideal é: ", str(resultado));

sexo = str(input("Digite o seu sexo (M para Mulher e H para Homem): "));
altura = float(input("Digite sua altura: "));

if  sexo == 'M':
    PesoMulher(altura);

if sexo == 'H':
    PesoHomem(altura);

