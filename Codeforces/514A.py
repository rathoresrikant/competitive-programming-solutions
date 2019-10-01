inp = raw_input()
resp = ""
for i in xrange(len(inp)): 
  if i != 0:
    if int(inp[i]) <= 9 and 9 -int(inp[i]) < int(inp[i]):
      resp += str(9 -int(inp[i]))
    else:
      resp += inp[i]

  if i == 0:
    if int(inp[i]) < 9 and 9 -int(inp[i]) < int(inp[i]):
      resp += str(9 -int(inp[i]))
    else:
      resp += inp[i]

print resp
