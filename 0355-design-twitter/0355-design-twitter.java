import java.util.*;

public class Twitter {
    private static int timeStamp = 0;
    private Map<Integer, Set<Integer>> followers;
    private Map<Integer, List<Tweet>> tweets;

    private class Tweet {
        int tweetId;
        int time;

        public Tweet(int tweetId, int time) {
            this.tweetId = tweetId;
            this.time = time;
        }
    }

    public Twitter() {
        followers = new HashMap<>();
        tweets = new HashMap<>();
    }

    public void postTweet(int userId, int tweetId) {
        if (!followers.containsKey(userId)) {
            followers.put(userId, new HashSet<>());
        }
        if (!tweets.containsKey(userId)) {
            tweets.put(userId, new ArrayList<>());
        }
        tweets.get(userId).add(new Tweet(tweetId, timeStamp++));
    }

    public List<Integer> getNewsFeed(int userId) {
        List<Integer> newsFeed = new ArrayList<>();
        PriorityQueue<Tweet> pq = new PriorityQueue<>((a, b) -> b.time - a.time);
        
        // Add the user's own tweets
        if (tweets.containsKey(userId)) {
            for (Tweet tweet : tweets.get(userId)) {
                pq.offer(tweet);
            }
        }

        // Add the tweets of the users the user follows
        if (followers.containsKey(userId)) {
            for (int followeeId : followers.get(userId)) {
                if (tweets.containsKey(followeeId)) {
                    for (Tweet tweet : tweets.get(followeeId)) {
                        pq.offer(tweet);
                    }
                }
            }
        }

        // Get the top 10 most recent tweets
        int count = 0;
        while (!pq.isEmpty() && count < 10) {
            newsFeed.add(pq.poll().tweetId);
            count++;
        }

        return newsFeed;
    }

    public void follow(int followerId, int followeeId) {
        if (!followers.containsKey(followerId)) {
            followers.put(followerId, new HashSet<>());
        }
        followers.get(followerId).add(followeeId);
    }

    public void unfollow(int followerId, int followeeId) {
        if (followers.containsKey(followerId)) {
            followers.get(followerId).remove(followeeId);
        }
    }
}