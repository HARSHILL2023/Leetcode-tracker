/**
 * @param {number} x
 * @return {number}
 */
var sumOfTheDigitsOfHarshadNumber = function(x) {
    let sum=0;
    let real=x;
    while(real>0){
        sum=sum+(Math.floor(real%10))
        real=Math.floor(real/10);
    }

    if((x%sum==0)) return sum;
    else return -1;
};