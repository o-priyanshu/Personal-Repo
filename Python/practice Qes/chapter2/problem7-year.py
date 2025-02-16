# age=int(input("Enter your current age: "))

# if age<=0 or age>90:
#     print("Invalid")
# else :
#      year=90-age
#      weeks=year*52
#      days=year*365
#      months=year*12

#      print(f' {days} days left, {weeks} weeks left  , {months} months left ,  {year} years left')

# def is_leap(year):
#     leap= True
#     if year//4 and year//400 :
#         leap = False
#         return leap
#     return leap
# year = int(input('year : '))
# print(is_leap(year))

size=int(input('size: '))
for row in range(size):
    for space in range (size-row-1):
        print(' ',end=' ')
    for col in range(size):
            print('*',end=" ")
    print()