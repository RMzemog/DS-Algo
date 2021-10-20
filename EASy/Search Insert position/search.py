#Given a sorted array and a target value, return the index
# if the target is found. 
# If not, return the index where it would be
#  if it were inserted in order.
def fin(nums , target): 
    if target in nums:
        return nums.index(target)
    elif target > nums[-1]:
        return len(nums)
    elif target not in nums:
        for i in range(len(nums)):
            if nums[i] > target:
                return i

print(fin([1,2,3,4], 2))
print(fin([1,3,4], 2))
print(fin([1,2,3,4],0))
print(fin([-1, 2 ,4 ,5 ,5], 0))
print(fin([1,2,3,4,5], 8))
        int low = 0, high = nums.size()-1;

        // Invariant: the desired index is between [low, high+1]
        while (low <= high) {
            int mid = low + (high-low)/2;

            if (nums[mid] < target)
                low = mid+1;
            else
                high = mid-1;
        }

        // (1) At this point, low > high. That is, low >= high+1
        // (2) From the invariant, we know that the index is between [low, high+1], so low <= high+1. Follwing from (1), now we know low == high+1.
        // (3) Following from (2), the index is between [low, high+1] = [low, low], which means that low is the desired index
        //     Therefore, we return low as the answer. You can also return high+1 as the result, since low == high+1
        return low;
    }
};