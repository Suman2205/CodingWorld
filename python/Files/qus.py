count=0
with open("python\Files\practice.txt","r") as f:
    data=f.read()
    print(data)
    nums=data.split(",")
    print(nums)
    for val in nums:
        if(int(val)%2==0):
            count+=1
    print(count)