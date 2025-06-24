class Person:
    __name="anonymous"
    def __hello(self):          #making function private
        print("Hello Person")
    def welcome(self):
        self.__hello()
p1=Person()
# print(Person.__name)
# p1.__hello("Suman")
print(p1.welcome())