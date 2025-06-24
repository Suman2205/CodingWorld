class Complex:
    def __init__(self,real,img):
        self.real=real
        self.img=img
    def show_complex_number(self):
        print(self.real,"i","+",self.img,"j")
    def __add__(self,num2):              #here + is replaced with add function 
        newReal=self.real+num2.real      # which means whenever + is used between two object this add function will perform
        newImg=self.img+num2.img
        return Complex(newReal,newImg)
num1=Complex(1,3)
num1.show_complex_number()
num2=Complex(3,1)
num2.show_complex_number()
num3=num1+num2
print("The additon of complex num1 and num2 is")
num3.show_complex_number()
num4=Complex(5,6)
num5=num2+num4
print("The additon of complex num2 and num4 is")
num5.show_complex_number()