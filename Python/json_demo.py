import json
print("**************")

print("loads")
print("JSON TO PYTHON")

data1 = '{"name":"ashutosh","age":21,"check":true}'
print(data1)
print(type(data1))
print()
parsed = json.loads(data1)
print(parsed)
print(type(parsed))
print()
print("**************")
print("dumps")
print("PYTHON TO JSON")


data2 = {
    "name":"ashutosh",
    "hobby":["dancing","coding"],
    "cars":("Nissan_gtr","ford_mustang"),
    "check":True
}
print(data2)
print(type(data2))
print()
parsed = json.dumps(data2)
print(parsed)
print((type(parsed)))

