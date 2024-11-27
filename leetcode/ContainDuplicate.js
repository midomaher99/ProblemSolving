/**
 * @param {number[]} nums
 * @return {boolean}
 actions 
 - make anew aray with same 
 */
var containsDuplicate = function (nums) {
    let myMap = new Map();
    for (let i = 0; i < nums.length; i++) {
        if (myMap.has(nums[i]))
            return true;

        myMap.set(nums[i], 1);
    }//for


    return false;
};