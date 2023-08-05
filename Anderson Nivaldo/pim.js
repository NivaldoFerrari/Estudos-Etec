let i=0
function fazPim(){
    let paragrafo=document.getElementById('paragrafo')
    
    while(i >= 0){
        i++
        if(i%4==0){
            paragrafo.innerHTML="PIM!!"
            var audio = document.createElement("audio");
            audio.src = "Audios/silvio-song.mp3"; 
            audio.autoplay = true;

            
        }else{
            paragrafo.innerHTML=i
        }
        break
    }
}

