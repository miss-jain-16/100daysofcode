# #ARRAY

# #1.Write a Python program to create an array of 5 integers and display the array items. Access individual element through indexes
# arr=[1,2,3,4,6]
# for i in arr:
#     print(i)

# #2.Write a Python program to append a new item to the end of the array.
# arr.append(2)
# for i in arr:
#     print(i)

# #3.Write a Python program to reverse the order of the items in the array
# arr.reverse()
# for i in arr:
#     print(i)

# #4.Write a Python program to get the length in bytes of one array item in the internal representation
# from array import *
# arr1=array('i',[1,3,5,7,9])
# print(str(arr1.itemsize))
# # print(str(arr.itemsize))

# #5. Write a Python program to get the number of occurrences of a specified element in an array.
# print(str(arr1.count(3)))

# #6.Write a Python program to append items from inerrable to the end of the array
# arr1.extend(arr1)
# print(arr1)

# #7.Write a Python program to remove a specified item using the index from an array
# arr=[1,2,3,4,5]
# arr.remove(1)
# for i in arr:
#     print(i)


# #8. Write a Python program to check if a given positive integer is a power of two
# num=4
# if num%2==0:
#     print("True")
# else:
#     print("False")

# #9.Write a Python program to check if a number is a perfect square. 
# n=8
# x=n//2
# y=set([x])
# while x*x!=n:
#     x=(x+(n//x))
#     if x in y: return False
#     y.add(x)
# return True

# #10. Write a Python program to check if an integer is the power of another integer

# def is_Power(x, y):
#    while (x%y == 0):
#        x = x / y
#    return x == 1
# print(is_Power(16, 2))
# print(is_Power(12, 2))
# print(is_Power(81, 3))

#11.Write a Python program to find a missing number from a list

Input = [1,2,3,4,6,7,10]
def missing_numbers(num_list):
      original_list = [x for x in range(num_list[0], num_list[-1] + 1)]
      num_list = set(num_list)
      return (list(num_list ^ set(original_list)))

print(missing_numbers([1,2,3,4,6,7,10]))
print(missing_numbers([10,11,12,14,17]))

    
#12. Write a Python program to find three numbers from an array such that the sum of three numbers equal to zero
def find_triplets(arr,n):
    found =True
    for i in range(0,n-2):
        for j in range(i+1,n-1):
            for k in range(j+1,n):
                if(arr[i]+arr[j]+arr[k]==0):
                    print(arr[i],arr[j],arr[k])
                    found=True
   


    if(found==False):
       print("NOT EXIST")

arr = [0, -1, 2, -3, 1] 
n = len(arr) 
find_triplets(arr, n) 



#13.Write a Python program to find the single number in a list that doesn't occur twice
 
def single_number(arr):
    result = 0
    for i in arr:
        result ^= i
    return result

arr1 = [5, 3, 4, 3, 4]
arr2 = [3, 2, 5, 2, 1, 5, 3]

print(single_number(arr1))
print(single_number(arr2))

#14.Find the single element in a list where every element appears three times except for one
