// Lesson 15 - (03/19/2025)
programa
{
	inclua biblioteca Tipos --> tipo
	
	funcao inicio()
	{
	
	   // Exercício 4 - Cadastro de Funcionários
	   escreva("========== Cadastro de Funcionários ==========")
	   cadeia funcionarios[6][5], x = " | "
	   inteiro curitiba = 0

		// Loop para cadastrar
		para (inteiro func = 0; func < 6; func++) { 
			escreva("\n----------------\nFuncionário ", func+1)
			escreva("\n| Nome: ")
			leia(funcionarios[func][0])
			escreva("| Setor: ")
			leia(funcionarios[func][1])
			escreva("| Função: ")
			leia(funcionarios[func][2])
			escreva("| Cidade: ")
			leia(funcionarios[func][3])
			escreva("| Salário: ")
			leia(funcionarios[func][4])
		}

		// Exibindo listagem de todos os funcionários cadastrados
		escreva("\n======= Listagem de Funcionários =======")
		para (inteiro i = 0; i < 6; i++){
			
			escreva("\n\n| Funcionário ", i+1)
			escreva("\nNome:", funcionarios[i][0], x, "Setor: ", funcionarios[i][1], x, "Função: ", funcionarios[i][2], x, "Cidade: ", funcionarios[i][3], x, "Salário: ", funcionarios[i][4])
		}

		// Exibindo funcionários do setor de RH
		escreva("\n\n========== Listagem de RH ==========")
		para (inteiro i = 0; i < 6; i++){
			se (funcionarios[i][1] == "RH"){
				escreva("\n\n| Funcionário ", i+1)
				escreva("\nNome:", funcionarios[i][0], x, "Função: ", funcionarios[i][2], x, "Cidade: ", funcionarios[i][3], x, "Salário: ", funcionarios[i][4])
			}
		}
		
		// Exibindo funcionários com salário maior que 2000
		escreva("\n\n========== SALÁRIO MAIOR DE 2000 ==========")
		para (inteiro i = 0; i < 6; i++){
			real salario = tipo.cadeia_para_real(funcionarios[i][4])
			se (salario >= 2000){
				escreva("\n\n| Funcionário ", i+1)
				escreva("\nNome:", funcionarios[i][0], x, "Setor: ", funcionarios[i][1], x, "Função: ", funcionarios[i][2], x, "Cidade: ", funcionarios[i][3], x, "Salário: ", funcionarios[i][4])
			}
		}

		// Exibindo funcionários que moram em Curitiba e são Assistentes
		escreva("\n\n========= CURITIBA ASSISTENTE ==========")
		para (inteiro i = 0; i < 6; i++){
			se (funcionarios[i][3] == "Curitiba"){
				curitiba++
				se (funcionarios[i][2] == "Assistente"){
					escreva("\n\n| Funcionário ", i+1)
					escreva("\nNome:", funcionarios[i][0], x, "Setor: ", funcionarios[i][1],  x, "Salário: ", funcionarios[i][4])
				}
			}
		}

		escreva("\n\n========== MORADORES DE CURITIBA =========\n\nNúmero de Funcionários que moram em Curitiba: ", curitiba, "\n\nFim do Programa!")		
	}
}
