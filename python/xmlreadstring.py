from xml.etree import ElementTree as ET

xml = """<books><book id = '37476'>aaaa</book><book id = '85692'>bbbb</book></books>"""
root = ET.fromstring(xml)
print(root.tag)
child = root.getchildren()
print(child)
print(child[0].tag)
print(child[0].attrib)
print(child[0].text)
