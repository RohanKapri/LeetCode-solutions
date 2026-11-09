import java.util.*;

public class Solution {
    public List<Integer> busiestServers(int totalServers, int[] arrivalTimes, int[] taskDurations) {
        int[] serverTaskCount = new int[totalServers];
        TreeSet<Integer> availableServers = new TreeSet<>();
        
        for (int i = 0; i < totalServers; i++) {
            availableServers.add(i);
        }

        PriorityQueue<int[]> inProgressTasks = new PriorityQueue<>((task1, task2) -> task1[0] - task2[0]);

        for (int i = 0; i < arrivalTimes.length; i++) {
            int arrival = arrivalTimes[i];
            int finish = arrival + taskDurations[i];
            
            while (!inProgressTasks.isEmpty() && inProgressTasks.peek()[0] <= arrival) {
                availableServers.add(inProgressTasks.poll()[1]);
            }
            
            if (availableServers.isEmpty()) continue;

            Integer serverAssigned = availableServers.ceiling(i % totalServers);
            if (serverAssigned == null) {
                serverAssigned = availableServers.first();
            }

            serverTaskCount[serverAssigned]++;
            availableServers.remove(serverAssigned);
            inProgressTasks.offer(new int[] {finish, serverAssigned});
        }

        return findMostActiveServers(serverTaskCount);
    }

    private List<Integer> findMostActiveServers(int[] serverTaskCount) {
        int maxTasks = 0;
        for (int count : serverTaskCount) {
            maxTasks = Math.max(maxTasks, count);
        }
        
        List<Integer> busiest = new ArrayList<>();
        for (int i = 0; i < serverTaskCount.length; i++) {
            if (serverTaskCount[i] == maxTasks) {
                busiest.add(i);
            }
        }
        
        return busiest;
    }
}
