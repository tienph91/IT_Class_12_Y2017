package DayOfTheProgrammer;

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static String solve(int year) {

        String result = "13.09." + year;

        if (year >= 1700 && year <= 1917) {
            if (year % 4 == 0) {
                result = "12.09." + year;
            }
        } else if (year == 1918) {
            result = "26.09." + year;
        } else {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
                result = "12.09." + year;
            }
        }

        return result;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        int year = scanner.nextInt();

        System.out.println(solve(year));
    }
}
