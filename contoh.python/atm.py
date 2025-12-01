def validasi_nama(nama):
    return nama.isalpha()

while True:
    nama = input("Masukkan nama: ")
    if validasi_nama(nama):
        break
    else:
        print("Nama tidak valid, coba lagi!")

nim = input("Masukkan NIM: ")
saldo = int(nim)

print(f"\nHalo {nama}, saldo kamu adalah Rp {saldo:,}")

while True:
    print("\n===== MENU ATM =====")
    print("1. Cek Saldo")
    print("2. Tarik Tunai")
    print("3. Setor Tunai")
    print("4. Transfer")
    print("5. Keluar")

    pilih = input("Pilih menu: ")

    if pilih == "1":
        print(f"Saldo kamu: Rp {saldo:,}")
    elif pilih == "2":
        tarik = int(input("Jumlah tarik: "))
        if tarik <= saldo:
            saldo -= tarik
            print("Penarikan berhasil.")
        else:
            print("Saldo tidak cukup!")
    elif pilih == "3":
        setor = int(input("Jumlah setor: "))
        saldo += setor
        print("Setor berhasil.")
    elif pilih == "4":
        tujuan = input("Rekening tujuan: ")
        nominal = int(input("Nominal transfer: "))
        if nominal <= saldo:
            saldo -= nominal
            print(f"Transfer ke {tujuan} berhasil.")
        else:
            print("Saldo tidak cukup!")
    elif pilih == "5":
        print("Terima kasih!")
        break
    else:
        print("Menu tidak valid!")