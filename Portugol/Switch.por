// Lesson 08 - (03/06/2025)
programa
{
    inclua biblioteca Matematica --> mat

    funcao inicio()
    {
        // Exercício 1 - Dia da Semana
        escreva("======= DIA DA SEMANA =======\n")
        inteiro diaDaSemana
        cadeia diaExtenso = ""
        
        escreva("Digite um número de 1 a 7: ")
        leia(diaDaSemana)

        escolha (diaDaSemana){
            caso 1:
                diaExtenso = "Segunda-feira"
                pare
            caso 2:
                diaExtenso = "Terça-feira"
                pare
            caso 3:
                diaExtenso = "Quarta-feira"
                pare
            caso 4:
                diaExtenso = "Quinta-feira"
                pare
            caso 5:
                diaExtenso = "Sexta-feira"
                pare
            caso 6:
                diaExtenso = "Sábado"
                pare
            caso 7:
                diaExtenso = "Domingo"
                pare
            caso contrario:
                diaExtenso = "Escolha inválida!"
                pare
        }

        escreva("O dia da semana é: ", diaExtenso, "\n")
        
        // Exercício 2 - Verificar se a letra é vogal
        escreva("======= VERIFICAR VOGAL =======\n")
        caracter letra       
        escreva("Digite uma letra: ") 
        leia(letra)

        escolha (letra){
            caso 'a':
            caso 'e':
            caso 'i':
            caso 'o':
            caso 'u':
                escreva("É Vogal!\n")
                pare
            caso contrario:
                escreva("Não é Vogal!\n")
                pare
        }
        
        // Exercício 3 - Cálculo do Peso Ideal
        escreva("======= PESO IDEAL =======\n")
        inteiro sexo    
        real altura, pesoIdeal = 0.0
           
        escreva("Informe seu sexo!\n 1 - Feminino | 2 - Masculino\n") 
        leia(sexo)

        escreva("Informe sua altura em centímetros: ") 
        leia(altura)
        altura /= 100

        escolha (sexo){
            caso 1:
                pesoIdeal = (altura * 62.1) - 44.7
                pare
            caso 2:
                pesoIdeal = (altura * 72.7) - 58
                pare
            caso contrario:
                escreva("Escolha inválida!\n")
                pare
        }

        escreva("Seu peso ideal é ", mat.arredondar(pesoIdeal, 2), " kg\n")

        // Exercício 4 - Vendas Parceladas
        escreva("======= VENDAS PARCELADAS =======\n")
        inteiro metodo
        real preco, precoFinal, parcela
        
        escreva("Insira o valor da compra: ")
        leia(preco)
        escreva("Escolha o método de pagamento!\n 1- À Vista | 2- 5x Sem Juros | 3- 10x Com Juros ")
        leia(metodo)

        escolha (metodo){
            caso 1:
                precoFinal = preco * 0.90
                escreva("O preço final sera de R$", precoFinal, " em uma parcela!\n")
                pare
            caso 2:
                precoFinal = preco
                parcela = precoFinal / 5
                escreva("O preço final sera de R$", precoFinal, " em 5 parcelas de R$", parcela, "\n")
                pare
            caso 3:
                precoFinal = preco * 1.2
                parcela = precoFinal / 10
                escreva("O preço final sera de R$", precoFinal, " em 10 parcelas de R$", parcela, "\n")
                pare
            caso contrario:
                escreva("Escolha inválida!\n")
                pare
        }

        // Exercício 5 - Peso em Outros Planetas
        escreva("======= PESO EM OUTROS PLANETAS =======\n")
        inteiro opcaoPlaneta    
        cadeia planeta = "Inválido"
        real peso, pesoPlaneta = 0.0

        escreva("Informe seu peso em Kg: ") 
        leia(peso)

        escreva("Escolha o planeta!\n 1 - Mercúrio | 2 - Vênus | 3 - Marte\n 4 - Júpiter | 5 - Saturno | 6 - Urano\n") 
        leia(opcaoPlaneta)

        escolha (opcaoPlaneta){
            caso 1:
                planeta = "Mercúrio"
                pesoPlaneta = peso * 0.37
                pare
            caso 2:
                planeta = "Vênus"
                pesoPlaneta = peso * 0.88
                pare
            caso 3:
                planeta = "Marte"
                pesoPlaneta = peso * 0.38
                pare
            caso 4:
                planeta = "Júpiter"
                pesoPlaneta = peso * 2.64
                pare
            caso 5:
                planeta = "Saturno"
                pesoPlaneta = peso * 1.15
                pare
            caso 6:
                planeta = "Urano"
                pesoPlaneta = peso * 1.17
                pare
            caso contrario:
                escreva("Escolha inválida!\n")
                pare
        }

        escreva("Seu peso no planeta ", planeta, " é ", mat.arredondar(pesoPlaneta, 2), " kg\n")

        // Exercício 6 - Calculadora
        escreva("======= CALCULADORA =======\n")
        inteiro num1, num2, operacao, resultado

        escreva("Digite o primeiro número: ")
        leia(num1)
        escreva("Digite o segundo número: ")
        leia(num2)

        escreva("Escolha a operação:\n 1 - Soma | 2 - Subtração | 3 - Divisão | 4 - Multiplicação\n")
        leia(operacao)

        escolha (operacao) {
            caso 1:
                resultado = num1 + num2
                escreva("O resultado da soma é ", resultado, "\n")
                pare
            caso 2:
                resultado = num1 - num2
                escreva("O resultado da subtração é ", resultado, "\n")
                pare
            caso 3:
                se (num2 != 0) {
                    resultado = num1 / num2
                    escreva("O resultado da divisão é ", resultado, "\n")
                } senao {
                    escreva("Erro: Divisão por zero não permitida!\n")
                }
                pare
            caso 4:
                resultado = num1 * num2
                escreva("O resultado da multiplicação é ", resultado, "\n")
                pare
            caso contrario:
                escreva("Escolha inválida!\n")
                pare
        }
    }
}