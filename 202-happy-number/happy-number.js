/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {

    while(n !== 1 && n !== 4){

        let sum = 0;

        while(n > 0){
            let digit = n % 10;   // get last digit
            sum = sum + digit * digit;  // square and add
            n = Math.floor(n / 10);  // remove last digit
        }

        n = sum;   // repeat process with new number
    }

    return n === 1;
};