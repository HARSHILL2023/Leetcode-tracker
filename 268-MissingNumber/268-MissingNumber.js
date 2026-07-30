// Last updated: 7/30/2026, 10:07:16 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let n = nums.length;
    let sum = nums.reduce((a,b)=>a+b,0);
    return (n*(n+1))/2 - sum;
};