#1- write a program to print multiplication table of a given number using for loop 

# num=int(input('Enter a number : '))

# for i in range(1,11):
#     print(f'{num} * {i} = {num*i}')

# 2- write a program to greet all the person names stored in a list "l" and which starts with S.
# l=["harry","piyush","Aryan","Sachin","Rahul"]

# for i in range(len(l)):
#                print(f'\t\vHello, {l[i]}')  #\v\nThankyou for visiting us

# 3- Attempt problem 1 using while loop

# num=int(input('Enter a number: '))
# i=1
# while (i<=10):
#     print(f'{num}*{i}={num*i}')
#     i+=1

# 4-Write a program to find whether a given number is prime or not 

# prime=int(input('enter a  number: '))

# if(prime <=1):
#     print('Invalid negative numbers can\'t be prime number')
# elif(prime ==2 ):
#     print('its a prime number')
# else :
#     is_prime=True
#     for i in range(2,prime):
#         if prime % i == 0 :
#             is_prime=False
#             break
#     if is_prime:
#         print('Its a prime number')
#     else:
#         print('Its is not prime number')

# 5- Write a program to find the sum of first n natural numbers using while loop

# n=int(input('Enter a number: '))
# sum,i=0,0
# while i<n:
#     sum=sum+i
#     i+=1
# print(sum)

# 6- Write a program to calculate the fact5orial of a given number using for loop 

# n=int(input('Enter a number: '))
# fact=1

# if(n<0):
#     print('Invalid')
# elif(n<=1):
#     print(1)
# else:
#     for i in range(1,n+1):
#         fact=fact*i
#     print(fact)

# 7- write a program to print the following star parttern
     
#      *
#     ***
#    ***** for n=3

n=3

for i in range(1,4):
    for j in range(1,i*i):
        print('*')