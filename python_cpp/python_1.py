
# #1. Write a Python program to print the following string in a specific format (see the output).

# # Sample String: "Twinkle, twinkle, little star, How I wonder what you are! Up above the world so high, Like a diamond in the sky. Twinkle, twinkle, little star, How I wonder what you are!"

# print("Twinkle,twinkle,little star, \n\tHow I wonder what u are! \n\t\tUp above the world so high, \n\t\tLike a diamond in the sky. \nTwinkle, twinkle, little star, \n\tHow I wonder what you are!")


# #2.Write a Python program to get the Python version you are using
# import sys
# print(sys.version)
# print(sys.version_info)


# #3.Write a Python program to display the current date and time.
# import datetime
# now=datetime.datetime.now()
# print(now.strftime("%Y-%m-%d %H:%M:%S"))



# #4.Write a Python program which accepts the radius of a circle from the user and compute the area
# r=float(input())
# # Area=3.8013271108436504
# area=3.14*r*r
# print(area)


# #5.Write a Python program which accepts the user's first and last name and print them in reverse order with a space between them
# first_name=str(input())
# last_name=str(input())
# print(last_name + " "+ first_name)


# #6.Write a Python program which accepts a sequence of comma-separated numbers from user and generate a list and a tuple with those numbers
# numbers=input("nos are:")
# list=numbers.split(",")
# tuple=tuple(list)
# print(list)
# print(tuple)


# #7.Write a Python program to accept a filename from the user and print the extension of that
# filename=input("enter the filename")
# f_ext=filename.split(".")
# print(repr(f_ext[-1]))

# # repr==> it returns the string 



# #8.Write a Python program to display the first and last colors from the following list.
# color_list = ["Red","Green","White" ,"Black"]
# print(color_list[0] + color_list[3])

# #9.Write a Python program to display the examination schedule.
# exam_st_date = (11, 12, 2014)
# print("%i/%i/%i"%exam_st_date)

# #10.Write a Python program that accepts an integer (n) and computes the value of n+nn+nnn
# a = int(input("Input an integer : "))
# n1 = int( "%s" % a )
# n2 = int( "%s%s" % (a,a) )
# n3 = int( "%s%s%s" % (a,a,a) )
# print (n1+n2+n3)

# #11.Write a Python program to print the documents (syntax, description etc.) of Python built-in function(s)
# print(abs.__doc__)

# #12.Write a Python program to print the calendar of a given month and year.
# import calendar
# x=int(input("year:"))
# y=int(input("month:"))
# print(calendar.month(x,y))

# #13. Write a Python program to calculate number of days between two dates.
# from datetime import date
# f_date=date(2017,7,2)
# l_date=date(2019,8,1)
# delta=l_date-f_date
# print(delta)

# #14.Write a Python program to get the difference between a given number and 17, if the number is greater than 17 return double the absolute difference
# given_no=25
# if(given_no>17):
#     print((given_no-17)*2)
# else:
#     print(17-given_no)

# #15. Write a Python program to test whether a number is within 100 of 1000 or 2000.
# def near_thousand(n):
#       return ((abs(1000 - n) <= 100) or (abs(2000 - n) <= 100))
# print(near_thousand(1000))
# print(near_thousand(900))
# print(near_thousand(800))   
# print(near_thousand(2200))

# #16.Write a Python program to calculate the sum of three given numbers, if the values are equal then return three times of their sum.
# x=int(input())
# y=int(input())
# z=int(input())
# if(x==y==z):
#     print((x+y+z)*3)
# else:
#     print(x+y+z)


# #17.Write a Python program to get a new string from a given string where "Is" has been added to the front. If the given string already begins with "Is" then return the string unchanged
# def new_string(str):
#     if len(str)>=2 and str[:2]=="Is":
#         return str
#     return "Is"+ str
# print(new_string("Array"))
# print(new_string("IsEmpty"))


# #18.Write a Python program to get a string which is n (non-negative integer) copies of a given string. 
# def larger_string(str,n):
#     result=""
#     for i in range(n):
#         result=result+str
#     return result
# print(larger_string("abc",2))


# #19. Write a Python program to find whether a given number (accept from the user) is even or odd, print out an appropriate message to the user. 
# num=int(input("Enter  a number"))
# mod=num%2
# if mod<0:
#     print("even")
# else:
#     print("odd")


# #20.Write a Python program to count the number 4 in a given list
# list=[1,2,3,4,4,5,5,4,5]
# count=0
# for num in list:
#     if num==4:
#         count=count+1
# print (count)

#21 Write a Python program to check whether a specified value is contained in a group of values
input=3
list=[1,5,8,3]
for i in list:
    if i==input:
        print("True")
    else:
        print("False")


#22.Write a Python program to concatenate all elements in a list into a string and return it
string1="Hy ,my name is megha"
string2="hello,u all"
print(string1+ " "+ string2)

#23.Write a Python program to concatenate all elements in a list into a string and return it
numbers = [    
    386, 462, 47, 418, 907, 344, 236, 375, 823, 566, 597, 978, 328, 615, 953, 345, 
    399, 162, 758, 219, 918, 237, 412, 566, 826, 248, 866, 950, 626, 949, 687, 217, 
    815, 67, 104, 58, 512, 24, 892, 894, 767, 553, 81, 379, 843, 831, 445, 742, 717, 
    958,743, 527
    ]

for x in numbers:
    if x == 237:
        print(x)
        break;
    elif x % 2 == 0:
        print(x)

#24.Write a Python program to print out a set containing all the colors from color_list_1 which are not present in color_list_2.
color_list_1 = set(["White", "Black", "Red"])
color_list_2 = set(["Red", "Green"])
print(color_list_1.difference(color_list_2))