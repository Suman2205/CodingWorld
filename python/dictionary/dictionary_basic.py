phy=int(input("enter your phy marks:"))
chem=int(input("enter your chem marks:"))
math=int(input("enter your math marks:"))
info={
    "first_name":input("enter first name:"),
    "last_name":input("enter last name:"),
    "marks":["marks in phy:",phy,"marks in chem:",chem,"marks in math:",math],
    "address":input("enter address:")
}
# print(info)
# print(type(info))
print(info["first_name"],info["last_name"],"got marks in each subject are:")
print(info["marks"])
print(sorted(info))