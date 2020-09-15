def count_expressions(x, n, vals):

    s = sum(v**n for v in vals)

    if s == x:
        return 1
    else:
        answer = 0
        v = vals[-1] + 1 if vals else 1
        while s + v**n <= x:
            answer += count_expressions(x, n, vals + [v])
            v += 1

        return answer

print(count_expressions(int(input()), int(input()), []))
