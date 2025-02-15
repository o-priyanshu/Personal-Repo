# 1- Write a program to print the following right-angled triangle star pattern for a given n:

# *
# * *
# * * *
# * * * *
# * * * * *

# r=int(input('How many rows you want to print: '))
# for row in range(0,r+1):
#     for col in range(1,row+1):
#         print(col,end=" ")
#     print()

# for row in range(0,r+1):
#     for col in range(1,row+1):
#         print(chr(64+col),end=" ")
#     print()


# for row in range(0,r+1):
#     for col in range(1,row+1):
#         print('*',end=" ")
#     print()


# 2- Write a C program to print the following inverted right-angled triangle star pattern for a given n:

# * * * * *  
# * * * *  
# * * *  
# * *  
# *  


# r=int(input('How many rows you want to print: '))


# for row in range(0,r+1):
#     for col in range(0,r-row):
#         print('*',end=" ")
#     print()

# for row in range(0,r+1):
#     for col in range(1,r-row+1):
#         print(col,end=" ")
#     print()

# for row in range(0,r+1):
#     for col in range(0,r-row):
#         print(chr(65+col),end=" ")
#     print()

# for row in range(0,r+1):
#     for col in range(row+1,r+1 ):   #not a good approach i think
#         print("*",end=" ")
#     print()

# 3- Write a program to print the following pyramid star pattern for a given n
 
#     *  
#    * *  
#   * * *  
#  * * * *  
# * * * * *

size=int(input('How many rows you want to print: '))
# less=size
# great=size
# for row in range(size,-1,-1):
#     for col in range(size-row,size*2): # not a correct logic
#         print('*',end='')
#     print(end='\n')

for row in range(1,size+1):
    for space in range(size-row):
        print(end=' ')

    for star in range(1,row+1):
            print('*',end=' ')
    print(end='\n')

        
# for row in range(size+1):
#     for col in range(1,size-row+1):
#         print(col,end=" ")
#     print()

# for row in range(size+1):
#     for col in range(size-row):
#         print(chr(65+col),end=" ")
#     print()


