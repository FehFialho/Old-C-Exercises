// Lesson 15 - (03/19/2025)
programa
{
    funcao inicio()
    {
        cadeia nomes[6]
        real notas[6]

        // Exercício 1 - Informar se o aluno aprovou ou reprovou.
        escreva("\n======== REPROVA APROVA ========\n")
        para (inteiro i=0; i < 6; i++){
            escreva("\nInsira nome do aluno ", i+1, ": ")
            leia(nomes[i])
            escreva("\nInsira nota do aluno ", i+1, ": ")
            leia(notas[i])
        }

        para (inteiro i=0; i < 6; i++){
            se (notas[i] >= 7){
                escreva("\nAluno: ", nomes[i], "\nNota: ", notas[i], " - Aprovado!\n")
            } senao {
                escreva("\nAluno: ", nomes[i], "\nNota: ", notas[i], " - Reprovado!\n")
            }
        }

        // Exercício 2 - Cadastro dos alunos
        cadeia nomes2[5]
        real altura[5], peso[5]

        escreva("\n======== CADASTRO DE ALUNOS ========\n")
        para (inteiro i = 0; i < 5; i++) {
            escreva("\nInsira o nome do aluno ", i+1, ": ")
            leia(nomes2[i])
            escreva("Insira a altura de ", nomes2[i], " (em metros): ")
            leia(altura[i])
            escreva("Insira o peso de ", nomes2[i], " (em kg): ")
            leia(peso[i])
        }
        
        escreva("\n======== ALUNOS COM ALTURA >= 1.70m E PESO >= 70kg ========\n")
        para (inteiro i = 0; i < 5; i++) {
            se (altura[i] >= 1.70 e peso[i] >= 70) {
                escreva("\nNome: ", nomes2[i], "\nAltura: ", altura[i], "m\nPeso: ", peso[i], "kg\n")
            }
        }
    }
}