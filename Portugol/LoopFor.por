// Lesson 15 - (03/13/2025)
programa
{
    funcao inicio()
    {
        // Exercício 1 - Categorizar Dragões
        escreva("\n============= DRAGÕES =============")
        
        inteiro maximo = 0, dragoes[5], amplitude
       
        para (inteiro i=1; i<=5; i++){
            escreva("\n\nInsira a quantidade do grupo ", i, ": ")  
            leia(dragoes[i-1])
            maximo += dragoes[i-1]          
        }        

        se (maximo > 18){
            amplitude = maximo - 18
            dragoes[4] -= amplitude
            maximo -= amplitude
        } senao se (maximo < 18) {
            amplitude = 18 - maximo
            maximo += amplitude
            dragoes[4] += amplitude
        } 

        se (maximo == 18){
            escreva("\n--------------------------\n")    
            escreva("Yama - ", dragoes[0], "\n")
            escreva("Usza - ", dragoes[1], "\n")
            escreva("Funzoe - ", dragoes[2], "\n")
            escreva("Dulug - ", dragoes[3], "\n")
            escreva("Cuyvu - ", dragoes[4], "\n")   
            escreva("--------------------------\n")
            escreva("        Total: ", maximo, "\n")
            escreva("--------------------------")
        }            
        
        // Exercício 2 - Urna Eleitoral
        escreva("\n============ URNA =============\n")
       
        inteiro voto, duck=0, grilo=0, branco=0, nulo=0
        
        para (inteiro i=1; i<=5; i++){
            escreva("\n\nInsira voto número ", i, ": ")  
            leia(voto)           

            escolha(voto){
                caso 11:
                    duck += 1
                pare
                caso 22:
                    grilo += 1
                pare
                caso 33:
                    branco += 1
                pare
                caso 44:
                    nulo += 1
                pare            
            }      
        } 

        escreva("\n-------Tribunal Eleitoral dos Picaretas----------\n\n       Total de Votos por Candidato       \n")
        escreva("\nDuck: ", duck, "\nGrilo: ", grilo, "\nBranco: ", branco, "\nNulo: ", nulo)
        
        // Exercício 3 - Identificar Positivos e Negativos
        escreva("\n============ POSITIVOS E NEGATIVOS =============\n")
        
        inteiro num
        para (inteiro i=1; i<=5; i++){
            escreva("\nDigite o ", i, "º número: ")
            leia(num)
            
            se (num >= 0){
                escreva("O número ", num, " é positivo.\n")
            } senao {
                escreva("O número ", num, " é negativo.\n")
            }
        }      

        // Exercício 4 - Identificar se o número é par ou ímpar
        escreva("\n======= PAR OU ÍMPAR =======\n")
        
        para (inteiro i = 1; i <= 5; i++) {
            escreva("Digite o ", i, "º número: ")
            leia(num)

            se (num % 2 == 0) {
                escreva("O número ", num, " é par.\n")
            } senao {
                escreva("O número ", num, " é ímpar.\n")
            }
        }

        // Exercício 5 - Identificar uso de transporte
        escreva("\n======= USO DE TRANSPORTE =======\n")

        inteiro i, onibus = 0, veiculo = 0
        cadeia transporte

        para (i = 1; i <= 7; i++) {  
            escreva("Pessoa ", i, ": Você usa ônibus (O) ou veículo próprio (V)? ")
            leia(transporte)
            
            se (transporte == "O" ou transporte == "o") {
                onibus = onibus + 1
            } senao se (transporte == "V" ou transporte == "v") {
                veiculo = veiculo + 1
            }
        }

        escreva("\nTotal de pessoas que usam ônibus: ", onibus, "\n")
        escreva("Total de pessoas que usam veículo próprio: ", veiculo, "\n")
    }
}