import java.util.ArrayList;
import java.util.Scanner;

public class NimProcessing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Minta input NIM
        System.out.print("Masukkan NIM: ");
        String nim = sc.nextLine();

        // 1. Ubah string menjadi array digit
        ArrayList<Integer> digit = new ArrayList<>();

        for (int i = 0; i < nim.length(); i++) {
            char c = nim.charAt(i);
            if (Character.isDigit(c)) {
                digit.add(Character.getNumericValue(c));
            }
        }

        int total = 0;
        int maks = 0;
        int minim = 0;
        double rata = 0;
        ArrayList<Integer> rev = new ArrayList<>();

        // Jika digit tidak kosong
        if (!digit.isEmpty()) {
            maks = digit.get(0);
            minim = digit.get(0);

            // 2. Hitung total, maksimum, minimum
            for (int d : digit) {
                total += d;

                if (d > maks) {
                    maks = d;
                }
                if (d < minim) {
                    minim = d;
                }
            }

            // 3. Rata-rata
            rata = (double) total / digit.size();

            // 4. Reverse array
            for (int i = digit.size() - 1; i >= 0; i--) {
                rev.add(digit.get(i));
            }
        }

        // Tampilkan hasil
        System.out.println("Digit          : " + digit);
        System.out.println("Total          : " + total);
        System.out.println("Maksimum       : " + maks);
        System.out.println("Minimum        : " + minim);
        System.out.printf("Rata-rata      : %.2f\n", rata);
        System.out.println("Reverse array  : " + rev);

        sc.close();
    }
}