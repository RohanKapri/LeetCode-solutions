var compress = function(chars) {
    let s = "";
    let counter = 1;
    for(let i = 0; i < chars.length; i++){
        if(chars[i] === chars[i+1]){
            counter++;
        }else{
            const cCount = counter === 1 ? "" : counter;
            s += `${chars[i]}${cCount}`;
            counter = 1;
        }
    }
    for(let i = 0; i < s.length; i++){
        chars[i] = s.charAt(i);
    }
    return s.length;
};