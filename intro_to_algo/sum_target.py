def twoSum(nums, target):
    
    j = 1
    for i in range(len(nums)-1):
        while j <= len(nums)-1:
            if nums[i] + nums[j] == target:
                return [i,j]
            j += 1
            
nums = [3,2,4]
#print(twoSum([2,7,11,15], 18))
target = 6

for i in range(len(nums)-1):
    j = 1
    while (j <= len(nums)-1):
        print(nums[i]+nums[j])
        if nums[i] + nums[j] == target and i != j:
            print([i,j])
        j += 1
