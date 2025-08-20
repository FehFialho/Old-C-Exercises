// Lesson 12 - (03/12/2025)
programa
{
    funcao inicio()
    {
        // Exercício 5 - Média de 5 números digitados pelo usuário
        escreva("\n======= MÉDIA DE 5 NÚMEROS =======\n")
        
        inteiro num, soma = 0, i = 1
        real media

        enquanto (i <= 5) {
            escreva("Digite o ", i, "º número: ")
            leia(num)
            soma = soma + num
            i++
        }

        media = soma / 5.0
        escreva("A média dos números digitados é: ", media, "\n")
        
        // Exercício 6 - Verificar maioridade
        escreva("\n======= VERIFICAÇÃO DE MAIORIDADE =======\n\n")
        
        inteiro idade
        
        i = 1
        enquanto (i <= 5) {
            escreva("Digite a idade da ", i, "ª pessoa: ")
            leia(idade)
            
            se (idade >= 18) {
                escreva("A pessoa é maior de idade.\n\n")
            }
            senao {
                escreva("A pessoa é menor de idade.\n\n")
            }
            i++
        }

        // Exercício 7 - Sistema de manutenção de peças
        escreva("====== MANUTENÇÃO DE PEÇAS ======\n")

        inteiro j = 1, motor = 0, resistor = 0, capacitor = 0, total = 0
        real porce

        soma = 0



        

        escreva("|   CÓDIGO  |       PEÇA        |\n|     1     |     Motor 12V     |\n|     2     |   Resistor 200o   |\n|     3     |  Capacitor 100uF  |\n=================================\n")

        escreva("\n-----------------------------\n")
        enquanto (j <= 3) {
            escreva("      ", j, "º Manutenção: ")
            escreva("\n-----------------------------")

            escreva("\nMotores Trocados: ")
            leia(soma)
            motor += soma

            escreva("\nResistores Trocados: ")
            leia(soma)
            resistor += soma

            escreva("\nCapacitores Trocados: ")
            leia(soma)
            capacitor += soma

            escreva("\n-----------------------------\n")
            
            j++
        }

        total = motor + resistor + capacitor

        // Exibindo os totais trocados
        escreva("Total de motores trocados: ", motor, "\n")
        escreva("Total de resistores trocados: ", resistor, "\n")
        escreva("Total de capacitores trocados: ", capacitor, "\n")
        escreva("-----------------------------\n")

        // Calculando e exibindo os percentuais
        porce = (motor * 100) / total
        escreva("Percentual de motores trocados: ", porce, "%\n")

        porce = (resistor * 100) / total
        escreva("Percentual de resistores trocados: ", porce, "%\n")

        porce = (capacitor * 100) / total
        escreva("Percentual de capacitores trocados: ", porce, "%\n")
        escreva("-----------------------------\n")
    }
}