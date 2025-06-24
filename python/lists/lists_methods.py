marks=[55,95,75,85,65,75,85,55]
print("original list:",marks)
marks.append(45)
marks.sort()
print("sorted list:",marks)
marks.reverse()
print("reverse list:",marks)
marks.insert(3,55)
print("list after inserting an element at specific position:",marks)
marks1=marks.copy()
print(marks1)
marks1.pop(3)
print(marks1)

