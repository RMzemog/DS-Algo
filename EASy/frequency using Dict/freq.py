def countFrequency(my_list):
    freq = {}
    for i in my_list:
        if (i in freq):
            freq[i] += 1
        else:
            freq[i] = 1
    for k, v in freq.items():
        if v > 1:
            return False
    return True
    
def countFrequency2(my_list):
    freq = {}
    for i in my_list:
        if my_list.count(i) > 1:
            return True
    return False

def containsDuplicate(nums):   
    return len(set(nums)) < len(nums)

#print(countFrequency([1,2,3,4,5,6]))
print(countFrequency2([1,2,3,4,5,6,6]))