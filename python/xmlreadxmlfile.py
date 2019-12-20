from xml.etree import ElementTree as ET

tree = ET.parse('python/test.xml')
root = tree.getroot()

childs = list(root)

books = []
for child in childs:
    book = {}
    for child0 in list(child):
        book[child0.tag] = child0.text
    books.append(book)

print(books)