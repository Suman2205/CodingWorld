class Student:
    def __init__(self,name,phy,chem,math):
        self.name=name
        self.phy=phy
        self.chem=chem
        self.math=math
    @property
    def percentage(self):
        return str((self.phy+self.chem+self.math)/3) +"%"
s1=Student("Suman",97,98,95)
print(s1.percentage)
s1.phy=99
print(s1.percentage)