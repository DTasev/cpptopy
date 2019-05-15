import png_reader
w = png_reader.World()
img = w.decode("../../img.png")


print(img)
print(len(img))

reader = png_reader.PNGReader("../../img.png")
print(reader.width)
print(reader.height)
