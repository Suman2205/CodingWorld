class Car:
    @staticmethod
    def start():
        print("Car started...")
    @staticmethod
    def stop():
        print("Car stopped.")
class ToyotaCar(Car):
    def __init__(self,brand):
        self.brand=brand
class Fortuner(ToyotaCar):
    def __init__(self,type,brand):
        self.type=type
        super().__init__(brand)                #use of super method to access methods of parent class.
car1=Fortuner("diesel","Fortuner")
print(car1.brand)
print(car1.type)
car1.start()