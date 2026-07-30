// Last updated: 7/30/2026, 10:05:39 AM
/**
 * @param {number} n
 * @return {number}
 */
var sumOfMultiples = function(n) {

    let sum = 0;

    for(let i = 1; i <= n; i++){

        if(i % 3 === 0 || i % 5 === 0 || i % 7 === 0){
            sum = sum + i;
        }

    }

    return sum;
};