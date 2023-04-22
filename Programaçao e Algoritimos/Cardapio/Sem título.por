programa {
  funcao inicio() {
    inteiro opcao, pizza, lanche, sobremesa

    escreva ("\n 1) Pizza")
    escreva ("\n 2) Lanche")
    escreva ("\n 3) Sobremesa")
    escreva("\n Escolha a sua opção: ")
    leia(opcao)
  
   limpa()

  escolha (opcao)
  {
    caso 1
    escreva("Cardáio de Pizza")
    
    escreva ("\n 1) Pizza 4 Queijos")
    escreva ("\n 2) Pizza Frango ")
    escreva ("\n 3) Pizza Portuguesa")
    leia(pizza)
   
    escolha(pizza) //escolha faz com que o codigo siga um caminho especifico
      {
        caso 1
        escreva("\n A Pizza de 4 Queijos custa  39,90")
        pare

        caso 2
        escreva("\n A Pizza de Frango custa  32,90")
        pare

        caso 3
        escreva("\n A Pizza de Portuguesa custa 35,90")
        pare
          caso contrario 
          escreva ("Opção invalida")

      }
    pare

    caso 2
    escreva("Cardáio de Lanche")

        escreva ("\n 1) Podrão")
        escreva ("\n 2) X-Gordinho ")
        escreva ("\n 3) X-FrangoBacon")
        leia(lanche)
      escolha(lanche) //escolha faz com que o codigo siga um caminho especifico
      {


        caso 1
        escreva("\n Podrão  14,90")
        pare

        caso 2
        escreva("\n x-Gordinho  31,90")
        pare

        caso 3
        escreva("\n x-Frango-Bacon 29,90")
        pare
           caso contrario 
          escreva ("Opção invalida")

      }
    pare

    caso 3
    escreva("Cardáio de SobreMesa")

        escreva ("\n 1) Bolo de Chocolate")
        escreva ("\n 2) Pudim ")
        escreva ("\n 3) Pão de mel")
        leia (sobremesa)
      escolha(sobremesa) //escolha faz com que o codigo siga um caminho especifico
      {
        caso 1
        escreva("\n O Bolo de Chocolate custa  22,90")
        pare

        caso 2
        escreva("\n O Pudim custa 15,90")
        pare

        caso 3
        escreva("\n Pão de Mel 8,90")
        pare
            caso contrario 
            escreva ("Opção invalida")

      }
    pare
    caso contrario 
    escreva ("Opção invalida")

  }
  
  
  }

 
}
