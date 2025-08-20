// Lesson 16 - (03/21/2025)
programa
{
    inclua biblioteca Util --> util
    
    funcao divisao(logico n1, inteiro x, cadeia titulo, logico n2){ 
        se (n1 == verdadeiro){
            escreva("\n")
        }

        para (inteiro i = 0; i < x/2; i++){
            escreva("=")
        }

        escreva(titulo)

        para (inteiro i = 0; i < x/2; i++){
            escreva("=") 
        }

        escreva("\n")

        se (n2 == verdadeiro){
            escreva("\n")
        }
    }

    funcao gera_matriz(inteiro lin, inteiro col, inteiro matriz[][]){ 
        para (inteiro i = 0; i < lin; i++){
            para (inteiro j = 0; j < col; j++){
                matriz[i][j] = util.sorteia(0, 9)
            }
        }
    }

    funcao inicio()
    {
        inteiro opcao
        cadeia controle
        
        enquanto (verdadeiro) {

        	  limpa()

        	  divisao(verdadeiro, 32, "", falso)
            escreva("Escolha um exercício para rodar")
            divisao(verdadeiro, 32, "", falso)
            escreva("1 - Contar Pares (5x5)\n")
            escreva("2 - Somar Colunas (3x3)\n")
            escreva("3 - Total de Vendas (6x4)\n")
            escreva("4 - Distância Cidades (5x5)\n")
            escreva("0 - Sair\n")
            escreva("------------------------------\nOpção: ")
            leia(opcao)
            
            escolha (opcao) {
                caso 1:
                    divisao(verdadeiro, 12, " Números Pares 5x5 ", verdadeiro)
                    inteiro matriz_pares[5][5], pares = 0
                    gera_matriz(5, 5, matriz_pares)
                    para (inteiro i = 0; i < 5; i++){
                        para (inteiro j =0; j < 5;j++){
                            escreva(matriz_pares[i][j], "  ")
                            se (matriz_pares[i][j] % 2 == 0){
                                pares++
                            }
                        }
                        escreva("\n")
                    }
                    escreva("---------------------------------------------\nA quantidade de números pares na matriz é ", pares, "!\n---------------------------------------------\n")
                    escreva("Digite qualquer tecla para continuar: ")
                    leia(controle)
                    pare
                    
                caso 2:
                    divisao(verdadeiro, 10, " Soma de Colunas 3x3 ", verdadeiro)
                    inteiro soma_col[3][3], soma1 = 0, soma2 = 0, soma3 = 0
                    gera_matriz(3, 3, soma_col)
                    para (inteiro i = 0; i < 3; i++) {
                        para (inteiro j = 0; j < 3; j++) {
                            escreva(soma_col[i][j], "  ")
                        }
                        soma1 += soma_col[i][0]
                        soma2 += soma_col[i][1]
                        soma3 += soma_col[i][2]
                        escreva("\n")  
                    }
                    escreva("--------\n", soma1, " ", soma2, " ", soma3, "\n--------\n")
                    escreva("Digite qualquer tecla para continuar: ")
                    leia(controle)
                    pare
                    
                caso 3:
                    divisao(verdadeiro, 12, " Vendas Loja 6x4 ", verdadeiro)
                    real vendas[6][4], total
                    para (inteiro i = 0; i < 6; i++) {
                        para (inteiro j = 0; j < 4; j++) {
                            escreva("Insira valor do semestre ", i+1, " semana ",j+1, ": ")
                            leia(vendas[i][j])
                        }
                    }
                    escreva("\n| Nº Semana |  S1  |  S2  |  S3  |  S4  |\n--------------------------------------\n")
                    para (inteiro i = 0; i < 6; i++) {
                        total = 0.
                        escreva(i+1,"º Semestre - ")
                        para (inteiro j = 0; j < 4; j++) {
                            escreva(vendas[i][j], "  ")
                            total += vendas[i][j]
                        } 
                        escreva("(Total Vendido R$", total,")\n")
                    }
                    escreva("--------------------------------------\nDigite qualquer tecla para continuar: ")
                    leia(controle)
                    pare
                    
                caso 4:
                    divisao(verdadeiro, 12, " Informa Distância 5x5 ", verdadeiro)
                    inteiro loop = 1, x, y, cidades[5][5] = {
                        {00, 15, 30, 05, 12},
                        {15, 00, 10, 17, 28},
                        {30, 10, 00, 03, 11},
                        {05, 17, 03, 00, 80},
                        {12, 28, 11, 80, 00}
                    }
                    enquanto (loop != 0) {
                        escreva("-----------------------------------------------------------------------------------\n")
                        escreva("1 - Curitiba | 2- Ponta Thick | 3 - Large Camp | 4 - Araucity | 5 - Farm Big River\n")
                        escreva("-----------------------------------------------------------------------------------\n")
                        escreva("\nInsira o número da primeira cidade: ")
                        leia(x)
                        escreva("Insira o número da segunda cidade: ")
                        leia(y)
                        escreva("--------------------------------------\n")
                        escreva("A distância entre as cidades é ", cidades[x-1][y-1],"km\n")
                        escreva("--------------------------------------\nDigite 0 caso queira sair...")
                        leia(loop)
                        se (loop != 0){
                            limpa()
                        }
                    }
                    pare
                    
                caso 0:
                    escreva("Saindo...\n")
                    pare
                
                caso contrario:
                    escreva("Opção inválida! Tente novamente.\n")
            }
        }
    }
}