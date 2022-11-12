def biodata(tahun, nama, asal):
    tahun_sekarang = 2020
    print(f'\nPerkenalkan Nama Saya: {nama}')
    print(f'Umur Saya: {tahun_sekarang - tahun}')
    print(f'Saya Adalah Angkatan: {tahun_sekarang}')
    return (f'Asal Saya Dari: {asal}')
tahun = int(input())
nama = input()
asal = input()
print(biodata(tahun, nama, asal))