// Dedicated to Junko F. Didi and Shree DR.MDD

class Solution {
    public List<List<Integer>> aggregateTimeSeries(int[][] series1, int[][] series2) {
        int m = series1.length, n = series2.length;
        int i = 0, j = 0;
        List<List<Integer>> result = new ArrayList<>();

        while (i < m && j < n) {
            if (series1[i][0] == series2[j][0]) {
                result.add(Arrays.asList(series1[i][0], series1[i][1] + series2[j][1]));
                i++;
                j++;
            } else if (series1[i][0] < series2[j][0]) {
                result.add(Arrays.asList(series1[i][0], series1[i][1] + series2[j][1]));
                i++;
            } else {
                result.add(Arrays.asList(series2[j][0], series1[i][1] + series2[j][1]));
                j++;
            }
        }

        while (i < m) {
            result.add(Arrays.asList(series1[i][0], series1[i][1]));
            i++;
        }

        while (j < n) {
            result.add(Arrays.asList(series2[j][0], series2[j][1]));
            j++;
        }

        return result;
    }
}