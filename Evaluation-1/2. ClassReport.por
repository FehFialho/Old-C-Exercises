programa
{
	inclua biblioteca Texto --> txt

	funcao inicio()
	{
		inteiro numAluno, numAval, indiMaior = 0, indiMenor = 0
		cadeia nomes[50], sobrenomes[50], estado[50]
		real media[50], notas[50][50], maiorMed = 0., menorMed = 10., mediaTurma = 0.

		
		escreva("Insira o número de alunos: ")
		leia(numAluno)
		
		escreva("Insira o número de avaliações por aluno: ")
		leia(numAval)

		escreva("\n============= Cadastro Nomes ==============\n")
		para (inteiro i=0; i < numAluno; i++){
			escreva("-----------------------------\nInsira o nome do aluno ", i+1,": ")
			leia(nomes[i])
			escreva("Insira o sobrenome do aluno ", i+1,": ")
			leia(sobrenomes[i])
		}

		escreva("\n============= Inserir Notas ==============")
		para (inteiro i=0; i< numAluno; i++ ){
			escreva("\n-----------------------------\nAluno: ", nomes[i], " ", sobrenomes[i], "\n-----------------------------\n")
				para (inteiro j=0; j < numAval; j++){
				escreva("Insira a nota da Avaliação ", j+1, ":")
				leia(notas[i][j])
				se (notas[i][j] > 10 ou notas[i][j] < 0){
					escreva("Insira uma nota válida (1 até 10)!\n\n")
					j -=1  //Tratamento de Erro: Nota fora do Escopo.
				} senao {
					media[i] += notas[i][j]
				}
			}
			media[i] /= numAval //Cálculo da Média de cada Aluno.
		}

		escreva("\n============== Estado Aluno ===============")
		para (inteiro i=0; i< numAluno; i++ ){

			se (media[i] >= 7){
				estado[i] = "Aprovado"
			} senao se (media[i] >= 5 e media[i]< 7){
				estado[i] = "Recuperação"
			} senao {
				estado[i] = "Reprovado"
			}
			
			escreva("\n-----------------------------\nAluno: ", nomes[i], " ", sobrenomes[i])
			escreva("\nNota ", media[i], " - ", estado[i])
		}

		escreva("\n\n============= Relatório Geral ==============")
		
		//Relatório Por Aluno.
		para (inteiro i=0; i< numAluno; i++ ){
			escreva("\n-----------------------------\nAluno: ", txt.caixa_alta(nomes[i]), " ", txt.caixa_alta(sobrenomes[i]))
			escreva("\nNotas: ")
			para (inteiro j=0;j< numAval;j++){
				escreva(notas[i][j], ", ")
			}
			escreva("\nMédia: ", media[i])
			escreva("\nSituação: ", estado[i])
			//Comparação da maior e menor nota + Sequestrando o Ìndice Correto.
			se (maiorMed < media[i]){
				maiorMed = media[i]
				indiMaior = i
			}
			se (menorMed > media[i]){
				menorMed = media[i]
				indiMenor = i
			}
			mediaTurma += media[i] //Somando todos os valores de média da Turma.
		}

		mediaTurma /= numAluno
		
		//Relatório Turma.
		escreva("\n____________________________________\n")
		escreva("\nMédia da Turma: ", mediaTurma)
		escreva("\nAluno com Maior Média:", txt.caixa_alta(nomes[indiMaior]), " ", txt.caixa_alta(sobrenomes[indiMaior]))
		escreva("\nAluno com Menor Média:", txt.caixa_alta(nomes[indiMenor]), " ", txt.caixa_alta(sobrenomes[indiMenor]))		

		escreva("\n----------------\n\nFim do Programa!\n----------------\n")

	}
}