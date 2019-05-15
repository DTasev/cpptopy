import example
print("------------ Script running ------------ ")

apples = example.Apples()
img = apples.decode("../../../img.png")

print(img.width)  # Good,
print(img.height)  # variables are public

print(len(img))  # ERROR
# TypeError: object of type
# 'MyImage' has no len()

print(img)

print(dir(example))
print(apples.get())
print(apples.vec())


for i in range(2 << 32):
    for j in range(1000):
      # Call that goes through
      # Python -> C++ transition
      # will be slow
