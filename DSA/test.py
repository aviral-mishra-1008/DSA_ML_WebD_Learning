nums = [3,3]
target = 6
for i in range(len(nums)):
    if target-nums[i] in nums:
        x = nums.index(target-nums[i])
        if x!=i:
            print([i,x])
        
                
