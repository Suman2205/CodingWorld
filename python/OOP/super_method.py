class Car:
    def __init__(self,type):
        self.type=type
    @staticmethod
    def start():
        print("Car started...")
    def stop():
        print("Car stopped.")
class ToyotaCar(Car):
    def __init__(self,name, type):
        super().__init__(type)                   #super() method is used to access methods of the parent class
        self.name=name
car1=ToyotaCar("Pirus","electric")
print(car1.type)
print(car1.start())