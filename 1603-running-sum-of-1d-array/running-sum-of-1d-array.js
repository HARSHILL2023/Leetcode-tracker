/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    let index=0;
    let sum=0;

    for(let i=0;i<nums.length;i++){
        sum+=nums[i];

        nums[index]=sum;
        index++;
    }

    return nums;
};