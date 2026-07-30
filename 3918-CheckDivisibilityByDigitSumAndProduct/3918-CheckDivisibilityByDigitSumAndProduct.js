// Last updated: 7/30/2026, 10:05:35 AM
/**
 * @param {number} n
 * @return {boolean}
 */
var checkDivisibility = function(n) {
    let sum=0;
    let product=1;
    let original=n;

    while(original>0){
        sum+=Math.floor(original%10);
        product*=Math.floor(original%10);
        original=Math.floor(original/10);
    
    }
    if(n%(sum + product )===0){
        return true;
    }
    else{
        return false;
    }

};