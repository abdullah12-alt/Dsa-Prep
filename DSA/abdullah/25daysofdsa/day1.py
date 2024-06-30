# Question 1: Sorted Squared Array - You are given an array of Integers in which each subsequent value is not less thanli the previous value. Write a function that takes this array as an input and returns a new array with the squares of each number sorted in ascending order.



# def sq_arr(li):
#     if len(li)==0:
#         return []
#     square=[x**2 for x in li]
#     square.sort()
#     return square



# li=[1,2,3,4]
# print(sq_arr(li))


# Question 2: Monotonic Array - An array is monotonic if it is either monotone increasing or monotone decreasing. An array is monotone increasing if all its elements from left to right are non-decreasing. An array is monotone decreasing if all  its elements from left to right are non-increasing. Given an integer array return true if the given array is monotonic, or false otherwise.



def monotonic_array(li):
    is_decreasing=True
    is_increasing=True
    if len(li)==1 or len(li)==0:
        return True
    
    for i in range(0,len(li)-1):
        if li[i]>li[i+1]:
            is_increasing=False
        if li[i]>li[i+1]:
            is_decreasing=False
    return is_decreasing or is_increasing



print(monotonic_array([10,-1,10]))



            

