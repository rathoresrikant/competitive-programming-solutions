def solve(drinks,percentages):
    total_percentage = 0
    for percentage in percentages:

        total_percentage += (percentage/100)

    return "{0:.12f}".format((total_percentage/drinks)*100)



if __name__ == "__main__":

    drinks = float(input())
    percentages = map(float,raw_input().split(" "))

    print solve(drinks,percentages)
