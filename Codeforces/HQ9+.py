def solve(input):
    printableChars = set('HQ9')
    for i in xrange(0, len(input)):
        if input[i] in printableChars:
            return "YES"
    return "NO"


if __name__ == "__main__":
    input = raw_input()
    print solve(input)
