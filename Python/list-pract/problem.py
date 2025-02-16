# head tail and who will pay the bill

#  head tail program 

# import random 
# coin_side=random.randint(0,1)
# if coin_side:
#     print('Head')
# else :
#     print('Tail')

# pay the bill 

# import random as rs
# name=list(input('Names: ').split())

# payer=rs.choice(name)
# print(f'{payer} will pay the bills')

# without choice
# import random as rs
# name=list(input('Names: ').split())

# payer=rs.randrange(0,len(name))
# print(f'{name[payer]} will pay the bills')

import random as rs
name=list(input('Names: ').split(","))
length=len(name)-1
payer=rs.randint(0,length)
print(f'{name[payer]} will pay the bills')