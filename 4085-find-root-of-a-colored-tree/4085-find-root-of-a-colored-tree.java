
class Solution {
    // For Junko F. Didi and Shree DR.MDD
    int getColor(char ch) {
        if (ch == 'R') return 0;
        if (ch == 'B') return 1;
        return 2;
    }

    public int findColoredRoot(int[][] edges, String colors) {
        int n = colors.length();
        int[] incoming = new int[n];
        int[] outgoing = new int[n];

        for (int[] edge : edges) {
            int a = edge[0];
            int b = edge[1];
            int ca = getColor(colors.charAt(a));
            int cb = getColor(colors.charAt(b));

            if (ca == cb) return -1;

            if ((cb - ca + 3) % 3 == 1) {
                outgoing[a]++;
                incoming[b]++;
            } else {
                outgoing[b]++;
                incoming[a]++;
            }
        }

        int root = -1;

        for (int i = 0; i < n; i++) {
            if (outgoing[i] > 2 || incoming[i] > 1) return -1;

            if (incoming[i] == 0) {
                if (root != -1) return -1;
                root = i;
            }
        }

        return root;
    }
}
