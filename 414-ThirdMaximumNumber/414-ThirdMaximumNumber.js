// Last updated: 7/30/2026, 10:06:56 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
    nums = [...new Set(nums)].sort((a,b)=>b-a);
    return nums[2] ?? nums[0];
};