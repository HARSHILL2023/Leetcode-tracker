// Last updated: 7/30/2026, 10:06:34 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    
    let neww=[];
    for(let i=0;i<nums.length;i++){
        neww.push((nums[i]*nums[i]));  
        
    }

   const new1= neww.sort((a,b)=>a-b);

   return new1;
};