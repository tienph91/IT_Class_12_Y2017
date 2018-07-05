package DrawingBook;

import java.io.IOException;

public class Solution {

    /*
     * Complete the pageCount function below.
     */
    static int pageCount(int n, int p) {
        int startOne = (int) ((p - 1.0) / 2 + 0.5);
        int startOneToEnd = (int) ((n - 1.0) / 2 + 0.5);
        int startEnd = startOneToEnd - startOne;

        return startEnd > startOne ? startOne : startEnd;
    }

    public static void main(String[] args) throws IOException {

        int n = 5;
        int p = 4;

        System.out.println(pageCount(n, p));
    }
}
