programa {
  funcao inicio() {

    real pao=0.8,qtdPao, leite=5, qtdLeite, salgado=3, qtdSalgado, totpagar, troco, dinheiro, caixa=50;
     
    escreva ("Digite a quantidade de Pães: ")
    leia(qtdPao)
     
    escreva ("Digite a quantidade de Leite: ")
    leia(qtdLeite)

    escreva ("Digite a quantidade de Salgado: ")
    leia(qtdSalgado)
     
    totpagar =(qtdPao * pao)+(qtdLeite * leite)+(qtdSalgado * salgado )

    escreva ("\n Total a Pagar: ", totpagar)

    escreva ("\n Quanto a Receber")
    leia (dinheiro)

     
    se dinheiro < totpagar escreva ("\n valor insuficente")
     

    se dinheiro == totpagar escreva ("\n não há troco. ")
     
     
    se (dinheiro > totpagar){   
     troco = dinheiro - totpagar
     escreva ("\n troco: ", troco )
    }

    se troco > caixa {
      escreva ("\n Nao temos esse valo em caixa, aceita troco em balas? ") 
    }

  }
}
