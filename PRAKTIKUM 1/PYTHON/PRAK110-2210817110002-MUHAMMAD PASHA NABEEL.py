import math
a = 5
t = 12
m = math.sqrt(pow(a,2)+pow(t,2))
K = a+t+m
L = a*t/2

print("Diketahui : ")
print("Alas = %d cm\nTinggi = %d cm\n"% (a, t))

print("Jawab :")
print("Sisi A = %d cm"% t)
print("Sisi B = %d cm"% m)
print("Sisi C = %d cm"% a)
print("Keliling = %d cm"% K)
print("Luas = %d cm"% L)