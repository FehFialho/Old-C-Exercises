// Evaluation 1 - (03/27/2025)
programa
{
	inclua biblioteca Util --> util
	
	funcao inicio()
	{
		inteiro random, guess = 0, tries= 1
		random = sorteia(1,100)


		enquanto (guess != random) {
			escreva("Digite seu chute: ")
			leia(guess)

			se (guess == random){
				escreva("\nVocê Acertou! O número é ", random, " e você tentou ", tries, " vezes!\n")
			} senao se (guess > random){
				escreva("\nO número é menor! ")	
				tries++
			} senao{
				escreva("\nO número é maior! ")	
				tries++
			}
		}

	}
}