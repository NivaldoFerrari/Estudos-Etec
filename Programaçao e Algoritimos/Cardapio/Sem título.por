programa {
  funcao inicio() {
    inteiro opcao, pizza, lanche, sobremesa

    escreva ("\n 1) Pizza")
    escreva ("\n 2) Lanche")
    escreva ("\n 3) Sobremesa")
    escreva("\n Escolha a sua op��o: ")
    leia(opcao)
  
   limpa()

  escolha (opcao)
  {
    caso 1
    escreva("Card�io de Pizza")
    
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
          escreva ("Op��o invalida")

      }
    pare

    caso 2
    escreva("Card�io de Lanche")

        escreva ("\n 1) Podr�o")
        escreva ("\n 2) X-Gordinho ")
        escreva ("\n 3) X-FrangoBacon")
        leia(lanche)
      escolha(lanche) //escolha faz com que o codigo siga um caminho especifico
      {


        caso 1
        escreva("\n Podr�o  14,90")
        pare

        caso 2
        escreva("\n x-Gordinho  31,90")
        pare

        caso 3
        escreva("\n x-Frango-Bacon 29,90")
        pare
           caso contrario 
          escreva ("Op��o invalida")

      }
    pare

    caso 3
    escreva("Card�io de SobreMesa")

        escreva ("\n 1) Bolo de Chocolate")
        escreva ("\n 2) Pudim ")
        escreva ("\n 3) P�o de mel")
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
        escreva("\n P�o de Mel 8,90")
        pare
            caso contrario 
            escreva ("Op��o invalida")

      }
    pare
    caso contrario 
    escreva ("Op��o invalida")

  }
  
  
  }

 
}
