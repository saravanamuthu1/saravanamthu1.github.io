import random
point=0
n=0
while(n<3):
    a=int(input("guess the  number==="))
    value=random.randint(1,10)
    if(a==value):
        print("your value is correct")
        point+=1

    else:
        print("your lose")
        print("the original value is ")
        print(value)
    n+=1
print("your score")
print(point)