#1- Write a Python program to check if a given number is odd or even.

# num=int(input("Enter Number: "))

# if num%2 == 0:
#     print("\t\vEven number")
# else :
    # print("\tOdd number")

#2- Write a program to determine whether a given year is a leap year.

# year=int(input('Enter a year: '))

# if year%4==0  and year%100 != 0 or year%400 == 0:
#     print(f'{year} is a leap year')
# else :
    # print(f'{year} is not a leap year')

# 3- Write a Python program to check if a person is eligible to vote based on their age (18 years or older).

# age=int(input("What is your age\n"))

# if age<=0 or age>100:
#     print('Invalid please enter your age')
# elif age>0 and age<18 :
#     print('You are not eligable for vote')
# else :
    # print('You are eligiable for vote')

# 4-Write a program to find the largest of three numbers entered by the user.

# num1=int(input('Enter a first number : '))
# num2=int(input('Enter a second number : '))
# num3=int(input('Enter a third number : '))

# if num1 > num2 :
#     if num1>num3:
#         print(f'{num1} is greatest number')
#     else :
#         print(f'{num3} is greatest number')
# else :
    # if num2>num3 :
    #     print(f'{num2} is greatest number')
    # else :
        # print(f'{num3} is greatest number')

# 5- Write a Python program to classify a character entered by the user as a vowel, consonant, or neither (e.g., digit or symbol).

# ch=input('Enter a character')
# if ch=="i" or ch=="a" or ch=="e" or ch=="o" or ch=="u" :
#     print('vowel')
# elif 


# 6-Write a program to calculate the grade of a student based on their marks:
# Marks >= 90: Grade A
# Marks >= 80: Grade B
# Marks >= 70: Grade C
# Marks >= 60: Grade D
# Marks < 60: Grade F

# Marks=int(input("Enter your marks "))

# if Marks >100 or Marks < 0 :
#         print('Invalid Marks')
# elif Marks >= 90:
#         print('Grade A')
# elif Marks >= 80:
#         print('Grade B')
# elif Marks >= 70:
#         print('Grade C')
# elif Marks >= 60:
#         print('Grade D')
# else:
        # print('Grade F')


# 7- Write a Python program to determine if a triangle is equilateral, isosceles, or scalene based on its three sides.

# side1=int(input('Enter the value of first side of triange '))
# side2=int(input('Enter the value of second side of triange '))
# side3=int(input('Enter the value of third side of triange '))

# if side1 == side2 :
#     print('isosceles')
# elif side1 == side2 and side2 == side3:
#     print('equilateral')
# else :
    # print('scalene')

# 8- Write a program to check if a number is divisible by both 3 and 5.

# num=int(input('Enter a number: '))

# if num%3 == 0 and num%5 == 0:
#     print('Number is divisible by both 3 and 5')
# else :
    # print('Not divisible')

# 9- Write a Python program to determine if a string starts and ends with the same character (case-insensitive).

# string=input('Enter a string: ')
# leng=len(string)

# if string[0] == string[leng-1]:
#     print('String starts and ends with the same character')
# else :
    # print('String doesn\'t starts and ends with the same character')

# ------------------------------ Real life ----------------------------------

# 10- Write a program to calculate the electricity bill based on the following conditions:
# For the first 100 units: ₹5 per unit
# For the next 100 units: ₹7 per unit
# Above 200 units: ₹10 per unit

# units=int(input('Total Units you have used: '))

# if units<0 :
#     print('Invalid Units')
# elif units<=100:
#     total=units*5
#     print(f'Electricity bill : {total}')
# elif units<=200:
#     total=100*5 + (units-100)*7
#     print(f'Electricity bill : {total}')
# else:
    # total=100*5+100*7+(units-200)*10
    # print(f'Electricity bill : {total}')

#11- Movie Ticket Price
# Write a program to calculate the ticket price based on a person's age:

# Below 5 years: Free
# 5–12 years: ₹100
# 13–60 years: ₹250
# Above 60 years: ₹150

# age=int(input('Enter your age : '))
# if age<=0 or age>=100:
#     print('Error.... Invalid age')
# else:
    # if age<5:
    #     print('Free')
    # elif age<=12:
    #     print('₹100')
    # elif age<=60:
    #     print('₹250')
    # else :
    #     print('₹150')

# 12- Traffic Light System

# Write a Python program that takes input for the current color of a traffic light ("red," "yellow," or "green") and suggests what action a driver should take ("stop," "slow down," or "go").

# signals=input('Enter a traffic singnal(red,green,yellow) : ')
# if signals == 'red':
#     print('stop')
# elif signals == 'yellow':
#     print('slow down')
# elif signals == 'go' :
#     print('go')
# else :
#     print('Invalid signal')

# 13- Bank Loan Eligibility
# A bank offers loans based on the following criteria:

# If your salary is ₹30,000 or above, you’re eligible.
# If your credit score is less than 650, you're not eligible even if your salary qualifies.
# Write a program to determine eligibility based on salary and credit score.


# salary,score=int(input('enter your salary: ')),int(input('Enter your credit score : '))
# if salary<0 or score<0:
#     print("Error please re-check your salary and credit score")
# else :
    # if salary >= 30000 and score >=650:
    #     print('you’re eligible')
    # else :
    #     print('you\'re not eligible')

# 14- Library Fine
# Write a Python program to calculate a library fine:

# If a book is returned on time, no fine.
# If it’s returned late by 1–5 days, ₹2 per day.
# If it’s late by 6–10 days, ₹5 per day.
# If it’s more than 10 days, ₹50 flat fine.

# days=int(input('Number of days: '))
# if days<0:
#     print('invalid')
# else:
    # if days==0:
    #     print('No fine')
    # elif days<=5:
    #     fine=days*2
    #     print(f'fine: {fine}')
    # elif days<=10:
    #     fine=5*2 + (days-5)*5
    #     print(f'fine: {fine}')
    # else :
    #     fine=5*2 + 5*5 + (days-10)*50
    #     print(f'fine: {fine}')

# 15- Discount on Shopping
# A store provides discounts based on the purchase amount:

# Purchases above ₹10,000: 20% discount
# Purchases between ₹5,000 and ₹10,000: 10% discount
# Purchases below ₹5,000: No discount
# Write a program to calculate the final bill after applying the discount.

# amount=int(input('Enter your amount: '))

# if amount<0:
#     print('please check your amount')
# else:
    # if amount<5000:
    #     print('No discount')
    # elif amount<=10000:
    #     discount=amount - (10000*0.1)
    #     print(discount)
    # else:
    #     discount=amount - (10000*0.2)
    #     print(discount)

# 16-Water Bill Calculation
# Write a Python program to calculate the water bill based on the number of liters consumed:

# Up to 1,000 liters: ₹2 per liter
# From 1,001 to 2,000 liters: ₹3 per liter
# Above 2,000 liters: ₹5 per liter

# water=int(input('How much liter you have consumed : '))

# if water<0:
    # print('invalid')
# else:
    # if water<=1000:
    #     cost=water*2
    #     print(cost)
    # elif water<=2000:
    #     cost=1000*2 + (water-1000)*3
    #     print(cost)
    # else :
    #     cost=1000*2 +1000*3 + (water-2000)*5
    #     print(cost)

# 17- Restaurant Tip Calculator
# Write a program to calculate the tip for a restaurant bill:

# Service rated "excellent": 20% tip
# Service rated "good": 15% tip
# Service rated "average": 10% tip
# Service rated "poor": No tip

# bill,rate=input('Amount of billl: ').input('Rate the service(excellent,good,average,poor) : ')

# if  bill<0:
#     print('invalid')
# else:
#     if rate =='excellent':
#         tip=bill*0.2
#         print(tip)
#     elif rate=='good':
#         tip=bill*0.15
#         print(tip)
#     elif rate=='average':
#         tip=bill*0.1
#         print(tip)
#     elif rate== 'poor':
#         print('no tip')
#     else :
#         print('Invalid rating') 


# 18 -Parking Charges
# A parking lot charges based on the number of hours a vehicle is parked:

# Up to 2 hours: ₹20 flat
# For every additional hour after 2 hours: ₹10 per hour
# If the vehicle is parked for more than 10 hours, a flat fee of ₹100 is charged.
# Write a program to calculate the parking charges based on hours parked.

# hr=int(input('Number of hours your vehicle is parked : '))

# if hr<0 and hr>24:
#     print('invalid')
# else:
#     if hr<=2:
#         cost=hr*20.
#         print(cost)
#     elif hr>10:
#         cost=2*20 + 8*10 + (hr-10)*100
#         print(cost)
#     else :
#         cost=2*20 + (hr-2)*10
#         print(cost)


# # 19- Fitness Tracker
# # Write a program to determine a person's activity level based on their daily step count :

# # Less than 5,000 steps: "Sedentary"
# # 5,000–7,499 steps: "Lightly Active"
# # 7,500–9,999 steps: "Moderately Active"
# # 10,000 steps or more: "Highly Active"

# # step=int(input('steps : '))

# # if step<0 :
# #     print('invalid')
# # else:
#     if step<5000:
#         print('Sedentary')
#     elif step<7500:
#         print("Lightly Active")
#     elif step<10000:
#         print("Moderately Active")
#     else :
#         print("Highly Active")

#20- School Admission
# Write a program to determine if a child is eligible for school admission based on the following criteria:

# The child's age must be at least 4 years old.
# If the child is exactly 4 years old, an interview is required.
# If the child is above 4, admission is granted without an interview.

# Conditional Statements (Easy to Hard)

# age=int(input('age : '))

# if age<4 :
#     print('The child\'s age must be at least 4 years old')
# else:
#     if age>19:
#         print('child is too old for school')
#     elif age==4:
#         print('child is eligible for school admission \n n interview is required. ')
#     else :
#         print(' admission is granted without an interview.')
