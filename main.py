import json

f = open("english_spanish.txt")

# for x in f[0]:
#     print("\"" + x + "\",")

english = []
with open("english_spanish.txt", "r") as f:
    for line in f:
        english.append(line.split(' ', 1)[1])

print(json.dumps(english))