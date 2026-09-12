

    static boolean isAnagram(String a, String b) {
    a = a.toLowerCase();
    b = b.toLowerCase();

    if (a.length() != b.length())
        return false;

    char[] x = a.toCharArray();
    char[] y = b.toCharArray();

    java.util.Arrays.sort(x);
    java.util.Arrays.sort(y);

    return java.util.Arrays.equals(x, y);

    }

