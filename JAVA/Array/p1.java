class p1 {
    public static void main(String agrs[]) {
        System.out.println("The Pattern is");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (j <= i) {
                    System.out.print("  $");
                } else {
                    System.out.print("   ");
                }
            }
            System.out.println();
        }
    }
}