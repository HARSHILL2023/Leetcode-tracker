// Last updated: 7/30/2026, 10:08:14 AM
/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let i=0;
    for(let j=0;j<nums.length;j++){
        if(nums[j]!==val){
            nums[i]=nums[j];
            i++;
        }
    }
    return  i;
};