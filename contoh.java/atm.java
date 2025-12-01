import java.util.*;

public class atm {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String nama;
        while (true) {
            System.out.print("Masukkan nama: ");
            nama = s.nextLine();
            System.out.print("Nama sudah benar? (TRUE/FALSE): ");
            String cek = s.nextLine().toUpperCase();
            if (cek.equals("TRUE")) break;
        }

        String nim;
        while (true) {
            System.out.print("Masukkan NIM angka saja: ");
            nim = s.nextLine();
            if (nim.matches("\\d+")) break;
        }

        int saldo = Integer.parseInt(nim);

        System.out.println("Nama: " + nama);
        System.out.println("Saldo awal: Rp " + String.format("%,d", saldo).replace(",", "."));

        while (true) {
            System.out.println("\n===== MENU ATM =====");
            System.out.println("1. Cek Saldo");
            System.out.println("2. Tarik Tunai");
            System.out.println("3. Setor Tunai");
            System.out.println("4. Transfer");
            System.out.println("5. Keluar");

            String p = s.nextLine();

            switch (p) {
                case "1" -> System.out.println("Rp " + String.format("%,d", saldo).replace(",", "."));

                case "2" -> {
                    System.out.print("Nominal tarik: ");
                    int t = Integer.parseInt(s.nextLine());
                    if (t <= saldo) saldo -= t;
                    else System.out.println("Saldo tidak cukup");
                }

                case "3" -> {
                    System.out.print("Nominal setor: ");
                    int st = Integer.parseInt(s.nextLine());
                    saldo += st;
                }

                case "4" -> {
                    System.out.print("Nominal transfer: ");
                    int tr = Integer.parseInt(s.nextLine());
                    if (tr <= saldo) {
                        System.out.print("Rekening tujuan: ");
                        String rek = s.nextLine();
                        System.out.println("Transfer ke " + rek + " berhasil");
                        saldo -= tr;
                    } else System.out.println("Saldo tidak cukup");
                }

                case "5" -> {
                    return;
                }

                default -> System.out.println("Pilihan salah");
            }
        }
    }
}