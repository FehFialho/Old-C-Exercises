// Evaluation 1 - (03/27/2025)
programa
{
	inclua biblioteca Util --> util

	funcao menu(){//Menu principal do Banco como Função para facilitar leitura.
		limpa()
		escreva("============ BANCO SENAI ============\n") 
	     escreva("1 - Consultar Saldo\n2 - Realizar Saque \n3 - Realizar Depósito\n4 - Transferência via PIX\n5 - Extrato\n6 - Sair\n=====================================\n")
	}

	funcao sair(){
		escreva("Saindo...\n-----------------------------\n")
		util.aguarde(1200)
	}
	
	funcao inicio()
	{
		inteiro choice = 0, confirma, key, operations = 0
		cadeia password, user, extrato[50]
		real saldo[10], value
		logico loop = verdadeiro

		saldo[0] = 2000. //Saldo Inicial
		enquanto (verdadeiro){ //Página de login com usuário e senhas predefinidas.
			escreva("============ LOGIN ============")
			escreva("\nInsira seus dados para continuar...\n")
			escreva("\nUsuário:")
			leia(user)
			escreva("Senha:")
			leia(password)
			escreva("Aguarde...")
			util.aguarde(1500)
			limpa()
			se (user == "cesar" e password == "ets2025"){ //Caso deseje, mude senha para testes.
				pare
			}
			escreva("\nAcesso Negado! Tente Novamente!\n\n")
		}

		enquanto (loop == verdadeiro){ //Loop principal controlado com variável.
			menu()
			escreva("Digite a opção desejada: ")
			leia(choice)

			escolha (choice){
				caso 1:
					escreva("----------------------------\nSeu saldo é de R$", saldo[0], "!\n----------------------------\n")
					util.aguarde(1200)
					escreva("Digite qualquer número para continuar! ")
					leia(confirma)
					sair()
				pare
				caso 2:
					escreva("Quantos reais deseja sacar? ")
					leia(value)
					escreva("O valor escolhida foi R$", value, "! Digite 1 para confirmar.\n")
					leia(confirma)
					se (confirma==1){
						se (saldo[0] > value){
							saldo[0] -= value
							escreva("Saque realizado com sucesso!\n")
							escreva("-----------------------------\n")
							escreva("Saldo Atual: R$", saldo[0], "\n")
							operations++
							extrato[operations-1] = ("|Saque| -" + value)
						} senao{
							escreva("Seu saldo é insuficiente para realizar a operação!\n")
							escreva("-----------------------------\n")
							escreva("Saldo Atual: R$", saldo[0], "\n")
						}
					}
					escreva("Digite qualquer tecla para continuar! ")
					leia(confirma)
					sair()
				pare
				caso 3:
					escreva("Quantos reais deseja depositar? ")
					leia(value)
					escreva("O valor escolhida foi R$", value, "! Digite 1 para confirmar.\n")
					leia(confirma)
					se (confirma==1){
						saldo[0] += value
						escreva("Depósito realizado com sucesso!\n")
						escreva("-----------------------------\n")
						escreva("Saldo Atual: R$", saldo[0], "\n")
						operations++
						extrato[operations-1] = ("|Depósito| +" + value)
					}
					escreva("Digite qualquer número para continuar! ")
					leia(confirma)
					sair()
				pare				
				caso 4:
					escreva("Insira a chave PIX: ")
					leia(key)
					escreva("Insira o valor da transferência: ")
					leia(value)
					escreva("O valor escolhido foi R$", value, "! Digite 1 para confirmar.\n")
					leia(confirma)
					se (confirma==1){
						se (saldo[0] > value){
							saldo[0] -= value
							util.aguarde(1000)
							escreva("Transferência realizada com sucesso!\n")
							escreva("-----------------------------\n")
							escreva("Saldo Atual: R$", saldo[0], "\n")
							operations++
							extrato[operations-1] = ("|Pix| -" + value)
						} senao{
							escreva("Seu saldo é insuficiente para realizar a operação!\n")
							escreva("Saldo Atual: R$", saldo[0], "\n")
						}			
					}
					escreva("Digite qualquer número para continuar! ")
					leia(confirma)
					sair()
					
				pare
				
				caso 5:
					escreva("\n===============Extrato================\n")
					para (inteiro i=0;i<operations;i++){
						escreva("--> ", extrato[i], "\n")
					}
					
					escreva("-----------------------------\n")
					escreva("Digite qualquer número para continuar! ")
					leia(confirma)
					sair()
				pare
				
				caso 6:
					escreva("\nObrigada por usar Senai Banco!\n")
					util.aguarde(1000)
					escreva("Até mais... \n")
					loop = falso
				pare
				caso contrario: //Aviso para usuário digitar valor válido.
					escreva("---------------------------\n! Escolha uma opção válida !\n---------------------------")
					util.aguarde(1400)
				pare
			}	 
		}
	}
}