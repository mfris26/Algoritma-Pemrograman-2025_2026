<?php

echo "Masukkan Nama Anda: ";
$nama = trim(fgets(STDIN));
echo "Masukkan Saldo Anda:  ";
$saldo = trim(fgets(STDIN));

echo "==============================\n";
echo " SELAMAT DATANG DI ATM \n";
echo "==============================\n";

$valid = true;
while ($valid) {
    echo "Menu ATM :\n";
    echo "1. Cek Saldo\n";
    echo "2. Setor Tunai\n";
    echo "3. Tarik Tunai\n";
    echo "4. Keluar\n";
    echo "Masukkan Pilihan Anda (1-4): ";
    $pilihan = trim(fgets(STDIN));

    switch ($pilihan) {
        case 1:
            echo "==============================\n";
            echo " Saldo Anda Saat Ini: $saldo \n";
            echo "==============================\n";
            break;
        case 2:
            echo "Masukkan Jumlah Setoran: ";
            $setoran = trim(fgets(STDIN));
            $saldo += $setoran;
            echo "==============================\n";
            echo " Setoran Berhasil! Saldo Baru: $saldo \n";
            echo "==============================\n";
            break;
        case 3:
            echo "Masukkan Jumlah Penarikan: ";
            $penarikan = trim(fgets(STDIN));
            if ($penarikan > $saldo) {
                echo "==============================\n";
                echo " Saldo Tidak Cukup untuk Penarikan! \n";
                echo "==============================\n";
            } else {
                $saldo -= $penarikan;
                echo "==============================\n";
                echo " Penarikan Berhasil! Saldo Baru: $saldo \n";
                echo "==============================\n";
            }
            break;
        case 4:
            echo "==============================\n";
            echo " Terima Kasih, $nama! \n";
            echo "==============================\n";
            $valid = false;
            break;
        default:
            echo "==============================\n";
            echo " Pilihan Tidak Valid, Silakan Coba Lagi. \n";
            echo "==============================\n";
            break;
    }
}

