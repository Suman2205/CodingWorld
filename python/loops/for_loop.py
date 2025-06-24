nums={1,2,3,4,5}
# for val in nums:
#     if val%2==0:
#         print(val)
for val in nums:
    if val%8==0:
        break
    print(val)
else:
    print("END")