// Lesson 12 - (03/12/2025)
programa
{
    funcao inicio()
    {
        // Exercício 1 - Contagem de 1 a 10
        escreva("======= CONTAGEM DE 1 A 10 =======\n")
        
        inteiro i = 1
        enquanto ( i <= 10 ){
            escreva(i, "\n")
            i++
        }
        
        // Exercício 2 - Entrada de Nome
        escreva("\n======= ENTRADA DE NOME =======\n")
        
        cadeia nome = " "
        enquanto (nome != "x") {
            escreva("\nDigite x para sair\n")
            escreva("Insira o nome:")
            leia(nome)
            se (nome != "x"){
                escreva("\nSeja bem vindo(a) ", nome, "!\n")
            } senao {
                escreva("Muito Obrigada!\nSaindo...\n")
            }
        }
        
        // Exercício 3 - Contagem Nome
        escreva("\n======= CONTAGEM NOME =======\n")
        
        i = 1
        enquanto (i <= 10) {
            escreva(i, ". Fernanda Fialho\n")
            i++
        }
        
        // Exercício 4 - Concatenação Nome
        escreva("\n======= CONTAGEM NOME =======\n--------------------------\n")
        
        i = 1
        cadeia sobrenome = " "
        enquanto (i <= 5) {
            escreva("Insira nome ", i, ": ")
            leia(nome)
            escreva("\nInsira sobrenome ", i, ": ")
            leia(sobrenome)
            escreva("\nNome Completo: ", nome, " ", sobrenome, "\n--------------------------\n")
            i++
        }