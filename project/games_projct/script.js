function getOption() {
    selectElement = document.querySelector('#select1');
    output = selectElement.options[selectElement.selectedIndex].value;
    // document.querySelector('.output').textContent = output;
    console.log(output);
    if(output=="Hindi"){
        document.getElementById('play').innerHTML="आप एक गेम खेलना चाहते हैं";
        document.getElementById('lang').innerHTML="अपनी भाषा का चयन करें";
        document.getElementById('select').innerHTML="वह गेम चुनें जिसे आप खेलना चाहते हैं";
    }
    else if(output=="Telugu"){
        document.getElementById('play').innerHTML="మీరు ఒక ఆట ఆడాలనుకుంటున్నారు";
        document.getElementById('lang').innerHTML="మీ భాషను ఎంచుకోండి";
        document.getElementById('select').innerHTML="మీరు ఆడాలనుకుంటున్న గేమ్‌ని ఎంచుకోండి";
    }
    else if(output=="Bhojpuri"){
        document.getElementById('play').innerHTML="रउरा कवनो खेल खेलब";
        document.getElementById('lang').innerHTML="आपन भाषा चुनीं";
        document.getElementById('select').innerHTML="आपन खेल चुनीं";
        
    }
    else {
        document.getElementById('play').innerHTML="Wanna play a game";
        document.getElementById('lang').innerHTML="Select your language";
        document.getElementById('select').innerHTML="Select the game you wanna play";
    }
}