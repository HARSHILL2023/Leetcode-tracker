/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
    nums = [...new Set(nums)].sort((a,b)=>b-a);
    return nums[2] ?? nums[0];
};