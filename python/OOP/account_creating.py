class Account:
    def __init__(self,acc,bal):
        self.account_no=acc
        self.balance=bal
    def debit(self,amount):
        self.balance-=amount
        print("Rs.",amount,"is debited from your account")
        print("Total balance=",self.get_balance(),"at this time")
    def credit(self,amount):
        self.balance+=amount
        print("Rs.",amount,"is credited to your account")
        print("Total balance=",self.get_balance(),"at this time")
    def get_balance(self):
        return self.balance
acc1=Account(12345,10000)
acc1.debit(5000)
acc1.credit(4000)