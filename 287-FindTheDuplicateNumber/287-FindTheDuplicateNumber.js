// Last updated: 7/30/2026, 10:07:15 AM
var findDuplicate = function(nums) {
    nums.sort((a,b)=>a-b);

    for(let i=1;i<nums.length;i++){
        if(nums[i]===nums[i-1]){
            return nums[i];
        }
    }
};