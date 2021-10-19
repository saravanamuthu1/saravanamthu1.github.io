def binary_search(a,value):
    left=0
    right=len(a)-1
    while(left<=right):
        mid=(right+left)//2
        if(value==a[mid]):
            return mid
        elif(value<a[mid]):
            left=0
            right=mid
        elif(value>a[mid]):
            left=mid
            right=len(a)-1

a=[2,4,5,7,8,9]
print("enter the value to search")
value=int(input())
start=0
endindex=len(a)-1
value=binary_search(a,value)
print(value)
