nilai = int(input())

if nilai == 0:
    print("Nol")
elif nilai <= 9:
    print("Satuan")
elif nilai >=100:
    print("Anda Menginput Melebihi Limit")
elif 11 <= nilai <= 19:
    print("Belasan")
else:
    print("Puluhan")