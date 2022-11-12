def MaxBilangan(a1, a2, a3, a4):
    if a1 > a2 and a1 > a3 and a1 > a4:
        return a1
    elif a2 > a1 and a2 > a3 and a2 > a4:
        return a2
    elif a3 > a1 and a3 > a2 and a3 > a4:
        return a3
    else:
        return a4
a1, a2, a3, a4 = input().split()
a1 = int(a1)
a2 = int(a2)
a3 = int(a3)
a4 = int(a4)
print(f'{MaxBilangan(a1,a2,a3,a4)}')