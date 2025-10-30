def polidrome(x):
    l = 0
    r = len(x) - 1
    while l < r :
        if x[l] != x[r]:
            return("NO")
        else:
            l += 1
            r -= 1
    return("YES")

Word = input("Please input word: ")
print (polidrome(Word))
