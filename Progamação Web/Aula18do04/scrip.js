var retorno = confirm("Clique em ola para exibir a menssagem de boas vindas")
alert("A vareável respodia possui agora o valor =" + retorno);

if (retorno == true){

    document.write("Seja <font color='blue'> bem venido!</font> <img src='https://www.meme-arsenal.com/memes/2d4334631b43f3ae0478e6fb959cab27.jpg' >");
}else{
    document.write(" <font color='red'>Coé @do</font> <img src='https://media.tenor.com/yZXjvQffRWEAAAAC/the-office-no.gif'>");
}