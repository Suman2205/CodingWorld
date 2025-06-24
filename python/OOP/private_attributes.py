class Account:
    def __init__(self,acc_no,acc_pass):
        self.acc_no=acc_no
        self.__acc_pass=acc_pass                   #making acc_pass attribute private which means this attribute did not access directly
    def reset_pass(self):
        print(self.__acc_pass)
acc1=Account(12345,"abcde")
print(acc1.acc_no)
acc1.reset_pass()
# print(acc1.__acc_pass)                     #This give an attribute error