/**
 * @param {string[]} words
 * @param {character} x
 * @return {number[]}
 */
var findWordsContaining = function(words, x) {
    let index=0;
    let neww=[];

    for(let i=0;i<words.length;i++){
       let check = words[i].includes(x);

        if(check){
            neww.push(i);
        }
        index++;
    }
    return neww;
};