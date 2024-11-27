class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {

        let myMap = new Map();
        for (let i = 0; i < nums.length; i++) {
            if (myMap.has(nums[i]))
                return true;

            myMap.set(nums[i], 1);
        }//for


        return false;
    }//hasDuplicate
}//class