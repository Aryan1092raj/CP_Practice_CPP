def cal_median(nums):
    nums.sort()
    n = len(nums)
    m = n//2
    if n%2 == 0 :
        return(nums[m-1]+nums[m])/2
    else :
        return nums[m]

def cal_mean(nums):
    n = len(nums)
    sum = 0
    for i in range(n) :
        sum += nums[i]
    return sum/n
list = [1,2,3,4,5,6,100]
print(cal_median(list))
print(cal_mean(list))