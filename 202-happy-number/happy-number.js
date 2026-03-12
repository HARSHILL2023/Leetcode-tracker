/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {

    while(n !== 1 && n !== 4){

        let sum = 0;

        while(n > 0){
            let digit = n % 10;   
            sum = sum + digit * digit;  
            n = Math.floor(n / 10); 
        }

        n = sum;  
    }

    return n === 1;
};