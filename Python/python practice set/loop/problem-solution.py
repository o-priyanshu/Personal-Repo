# 1- Write a program to print numbers from 1 to 50 using a for loop.

# for i in range(1,51):
    # print(i)
    
# 2- Sum of Natural Numbers
# Write a program to calculate the sum of the first 20 natural numbers using a while loop.

# i=1
# sum=0
# while i<21:
#     sum=sum+i
#     i=i+1
# print(sum)

# 3-Multiplication Table
# Write a Python program to display the multiplication table of a number entered by the user.

# num=int(input('enter a number: '))

# for i in range(1,11):
#     print(f'{num} * {i} = {num*i}')

# 4- Factorial Calculation
# Write a program to calculate the factorial of a number using a while loop.

# num=int(input('enter a number: '))
# fact=1
# i=1
# while i<=num:
#     fact=fact*i
#     i=i+1
# print(fact)

# 5- Reverse Number
# Write a program to reverse a given number (e.g., 12345 → 54321) using a loop.

# num=int(input('enter a number: '))
# reverse=0
# while num > 0:
#     reminder=num%10
#     reverse=(reverse*10) + reminder
#     num=num//10
# print(reverse)

# 6- Write a program to count the number of digits in a given number using a while loop.

# num1=int(input('enter a number: '))
# count=0
# while num1>0:
#     count=count+1
#     num1=num1//10
# print(f'{count} digits')

# 7-Print Even Numbers
# Write a program to print all even numbers between 1 and 100 using a for loop.

# for i in range(1,51):
#     print(f'{i*2}')

# best approach
# for i in range(2,101,2):
#     print(i)


# 8-Check Prime Number
# Write a program to check if a given number is a prime number or not.

# num=int(input('enter a number: '))

# if num<=1:
#     print('Negative number can\'t be prime number')
# elif num == 2:
#     print('Its a prime number')
# else:
#     is_prime=True
#     for i in range(2,num):
#         if num % i ==0:
#             is_prime=False
#             break
#     if is_prime:
#         print('Its a prime number')
#     else :
#         print('Its not a prime number')

# 9- Number Pattern
# Write a program to print the following pattern using nested loops:
# 1  
# 1 2  
# 1 2 3  
# 1 2 3 4  
# 1 2 3 4 5  

# n=int(input('how many lines you want to print: '))
# j=1
# for i in range(1,n+1):
#     for j in range(1,n+1):
#         if j<=i :
#             print(f"{j}",end='')
#             j+=1
       
#     print('\n')

# 10- Sum of Digits
# Write a program to calculate the sum of the digits of a given number using a loop.

# num=int(input('Enter a number : '))
# sum=0
# i=1
# while(num > 0):
#     reminder=num%10
#     sum=sum+reminder
#     num=num//10
# print(sum)

#11- Write a program to reverse a number
# num=int(input('Enter a number : '))
# reverse=0
# while (num >0 ) :
#     reminder=num % 10
#     reverse=reverse * 10 + reminder
#     num=num//10
# print(reverse)

# 12 - Write a program for a perfect number
# num=int(input('Enter a number : '))
# sum=0
# for i in range(1,(num//2)+1):
#     if num % i == 0:
#         sum+=i
# if sum==num:
#     print('its a perfect number')
# else :
#     print('Its not a perfect number')    

# Number Pattern
# 13- Write a program to print the following pattern using nested loops:

# 1    
# 1 2  
# 1 2 3  
# 1 2 3 4  
# 1 2 3 4 5  

# num=int(input('how many times you want to print  : '))
# for i in range(0,num):
#     for j in range(0 ,i+1 ):
#         print(j+1,end=' ')
#     print(end='\n')

# 14- write a program to calculate simple interest 

# p=float(input("enter principle amount : "))
# n=float(input("Number of years: "))
# rate=float(input("Rate : "))

# si=p*n*rate/100
# print(si)

# 15- Write a program that prints numbers from 1 to 10 using a infinte loop.
# all numbers should get printed in the same line 

# i=1
# while (1):
#     print(i,end=' ')
#     i+=1
#     if(i>10):
#           break;

# 16- Write a program that prints all unique combinations of 1,2 and 3

# 17- Write a program that obtains decimal value of a binary numeric string
