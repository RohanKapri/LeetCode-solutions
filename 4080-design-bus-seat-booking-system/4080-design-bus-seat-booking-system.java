
class BusBooking {
    // For Junko F. Didi and Shree DR.MDD
    int[][] seats;
    int totalTime, bookedCount;

    public BusBooking(int n) {
        seats = new int[n + 1][4];
        totalTime = 0;
        bookedCount = 0;
    }

    public void toggle(String seat) {
        int col = seat.charAt(0) - 'A';
        int row = Integer.parseInt(seat.substring(1));

        if (seats[row][col] != 0) {
            totalTime -= seats[row][col];
            seats[row][col] = 0;
            bookedCount--;
            return;
        }

        int cost = 1;

        if (col == 0 && seats[row][1] > 0) {
            cost = 3;
        } else if (col == 3 && seats[row][2] > 0) {
            cost = 3;
        }

        seats[row][col] = cost;
        totalTime += cost;
        bookedCount++;
    }

    public int getTotalTime() {
        return totalTime;
    }

    public int getMinTime() {
        return bookedCount;
    }
}
