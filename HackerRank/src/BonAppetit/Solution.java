package BonAppetit;

import java.util.Scanner;

public class Solution {
    public static void main(String args[]) throws Exception {
        int n, k, b;
        int[] bill;
        int totalAnna = 0;

        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        k = scanner.nextInt();

        bill = new int[n];

        for (int i = 0; i < n; i++) {
            bill[i] = scanner.nextInt();

            if (i != k) {
                totalAnna += bill[i];
            }
        }

        b = scanner.nextInt();
        scanner.close();

        // count sum
        int charge = totalAnna / 2;

        if (b == charge) {
            System.out.println("Bon Appetit");
        } else {
            System.out.println(b - charge);
        }
    }
}