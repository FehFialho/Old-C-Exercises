// Lesson 15 - (03/19/2025)
programa
{

	funcao inicio()
	{
	   // Exercício 3 - Lanchonete Lanche's
	   escreva("========Lanche's========")
	   cadeia nome[5], x = "|"
        real preco[5]
        inteiro codigo[5]

		para (inteiro i = 0; i < 2; i++) { // Cadastro de itens.
			escreva("\n--------------\n* PRODUTO ", i+1)
			escreva("\n| Nome: ")
			leia(nome[i])
			escreva("| Código: ")
			leia(codigo[i])
			escreva("| Preço Unitário: ")
			leia(preco[i])
		}

		// Exibição dos produtos cadastrados.
		escreva("___________________________________\n")
		escreva("\n", x, " Código ", x, "    Produto    ", x, " Preço  ", x, "\n")
				
		para (inteiro i = 0; i < 2; i++) {
			escreva(x, "  ", codigo[i], "   ", x, " ", nome[i], ".......R$", preco[i], " ", x, "\n")
		}

		// Produtos com preço acima de R$ 3,00.
		escreva("___________________________________\n")
		escreva("\nProdutos com preço acima de R$ 3,00\n")
		para (inteiro i = 0; i < 2; i++) {
			se (preco[i] > 3.00) {
				escreva(x, "  ", nome[i], ".......R$", preco[i], " ", x, "\n")
			}
		}
	}
}
