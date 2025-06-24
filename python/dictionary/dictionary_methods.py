phy=int(input("enter your phy marks:"))
chem=int(input("enter your chem marks:"))
math=int(input("enter your math marks:"))
info={
    "first_name":input("enter first name:"),
    "last_name":input("enter last name:"),
    "marks":["marks in phy:",phy,"marks in chem:",chem,"marks in math:",math],
    "address":input("enter address:")
}
print(info.keys())
print(info.values())
print(info.items())
print(info.get("first_name"))
info.update({"phone_no.":9999999999})
print(info)