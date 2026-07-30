// Last updated: 7/30/2026, 10:05:32 AM
/**
 * @param {number} n
 * @param {number} t
 * @return {number}
 */
var smallestNumber = function(n, t) {

    while(true){

        let product = 1;
        let number = n;

        while(number > 0){
            product *= number % 10;
            number = Math.floor(number / 10);
        }

        if(product % t === 0){
            return n;
        }
        n++;
    }
};