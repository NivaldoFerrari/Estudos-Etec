let i=0
function fazPim(){
    let paragrafo=document.getElementById('paragrafo')
    
    while(i >= 0){
        i++
        if(i%4==0){
            paragrafo.innerHTML="PIM!!"
        }else{
            paragrafo.innerHTML=i
        }
        break
    }
}

