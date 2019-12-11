import os
path = os.listdir(os.getcwd())
for p in path:
    if os.path.isdir(p):
        print(p)
with open("python/test.txt", 'w') as file_object:
    file_object.write('I love programming.\n')
    file_object.write('skrskr.\n')
