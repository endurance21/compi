#https://leetcode.com/problems/next-greater-element-iii/submissions/
class Solution:
    def nextGreaterElement(self, n: int) -> int:
        
        digits = []
        while(n!=0):
            last_digit = n%10
            digits.insert(0,last_digit)
            n =  n //10
        
        ## findSmallerOne is implemented below
        smallerNumberIndex = findSmallerOne(digits)
        
        if smallerNumberIndex == -1 :
            return -1
        
        # you can replce simpleSearch with BinarySearch and see incrase in speed ,yeah
        nearestGreaterIndex = simpleSearch(digits, digits[smallerNumberIndex], smallerNumberIndex+1, len(digits)-1)
        
        #swap function is implemented below
        swap(digits, smallerNumberIndex, nearestGreaterIndex)
        
        rightPart = digits[smallerNumberIndex+1 : len(digits)]
        leftPart = digits[0:smallerNumberIndex+1]
        
        rightPart.sort()
        
        new_digits = leftPart + rightPart
        
        new_number_string= ''.join([str(x) for x in new_digits])
        
        new_number = int(new_number_string)
        
        
        if new_number > pow(2,31) -1 :
            return -1 
        
        return new_number
        
def swap(nums:List[int], index1, index2):
    nums[index1], nums[index2] = nums[index2], nums[index1]
    
def findSmallerOne(nums:List[int])->int:
    for i in range(len(nums)-2,-1,-1):
        if nums[i] < nums[i+1] :
            return i 
    return -1

def simpleSearch(nums:List[int],target:int, left:int , right:int)->int :
    for i in range(left,right+1):
        if nums[i] > target :
            if i == right:
                return i 
            if nums[i+1] <=target :
                return i
        
    
def binarySearch( nums:List[int],target:int, left:int , right:int) ->int :
    
    mid  = (right -left ) // 2 + left 
    
    if nums[mid] > target:
        if mid ==  right :
            return mid
        if nums[mid+1] <=target :
            return mid
        
        return binarySearch(nums, target, mid+1, right)
    elif nums[mid] <= target:
        return binarySearch(nums, target, left, mid-1)
    
