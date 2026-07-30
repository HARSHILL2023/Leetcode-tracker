// Last updated: 7/30/2026, 10:06:49 AM
/**
 * @param {number} num
 * @return {boolean}
 */
var checkPerfectNumber = function(num) {
    let sum = 0;

    for(let i = 1; i < num; i++){
        if(num % i === 0){
            sum += i;
        }
    }

    return sum === num;
};