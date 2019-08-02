import json


# a = {
#     'name':'Ashutosh',
#     'age':21,
#     'marks':[12,23,34,45],
#     'pass': True
#
# }
# with open('demo.json','w') as fh:
#      fh.write(json.dumps(a, indent=4, sort_keys=True))

with open('demo.json','r') as f:
    json_str = f.read()
    json_value = json.loads(json_str)
    print(json_value)
    print("********")
    print(json_value['marks'])