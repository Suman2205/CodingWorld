import math
import random
print(math.log(100))
print(random.randint(1,10))
print(math.pow(2,3))
print(math.sqrt(8))
print(random.random())
import statistics
data=[1,2,2,3,3,4]
print(statistics.mean(data))
print(statistics.median(data))
print(statistics.mode(data))

def fun():
    i=3
    print(i)
    def fun1():
        nonlocal i
        i=4
        print(i)
    fun1()
    print(i)
fun()
