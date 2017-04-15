pchars = u"abcdefghijklmnopqrstuvwxyz,.?!'()[]{}"
fchars = u"ɐqɔpǝɟƃɥıɾʞlɯuodbɹsʇnʌʍxʎz'˙¿¡,)(][}{"
flipper = dict(zip(pchars, fchars))

def flip(s):
  charList = [ flipper.get(x, x) for x in s.lower() ]
  charList.reverse()
  return "".join(charList)

print(flip("hello"))
