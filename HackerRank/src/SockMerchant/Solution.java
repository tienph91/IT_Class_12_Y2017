package SockMerchant;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Solution {

    // Complete the sockMerchant function below.
    static int sockMerchant(int n, int[] ar) {
        int[] arraySock = new int[n];
        int current = 0;
        int[] numberSock = new int[n];
        int i, j;
        for (i = 0; i < n; i++) {
            int temp = ar[i];

            for (j = 0; j < current; j++) {
                if (temp == arraySock[j]) {
                    numberSock[j]++;
                    break;
                }
            }

            if (current == 0 || j == current) {
                arraySock[current] = temp;
                numberSock[current]++;
                current++;
            }
        }

        int total = 0;
        for (i = 0; i < current; i++) {
            total += numberSock[i] / 2;
        }

        return total;
    }

    public static void main(String[] args) throws IOException {

        int n = 9;

        int[] ar = { 10, 20, 20, 10, 10, 30, 50, 10, 20 };

        int result = sockMerchant(n, ar);

        System.out.println(result);
    }
}
