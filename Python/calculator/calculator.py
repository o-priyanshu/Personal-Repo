num1=int(input('Enter a number '))
num2=int(input('enter a number '))
operation=input('Enter the operation you want to perform (+,-,*,/,**)... ')

if operation == '+' :
    result=num1+num2
    print(result)

elif operation == '-' : 
    result=num1 - num2 
    print(result)

elif operation == '*' :
    result=num1 * num2 
    print(result)

elif operation == '/' : 
    if num2<0 or num2 == 0 :
        print('Invalid Denominator is less than 0')    
    else :
        result= num1 / num2
        print(result)

elif operation == '**' :
    result = num1 ** num2
    print(result)

else :
    print('Invalid Operation')


# if operation == '/':
#     if num2 < 0 or num2 == 0 :
#         print('Invalid Denominator is less than or eaqual to zero')
#     else :
#         result=num1 / num2
#         print(result)

