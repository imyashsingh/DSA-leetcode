// Design Twitter
// https://leetcode.com/problems/design-twitter/



class Twitter {
public:
    map<int,map<int,int>> users;
    map<int,vector<int>> postByTime;
    int time=0;
    
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        postByTime[time++] = {tweetId,userId};
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> feed;
        for (int i=time-1;i>=0;i--){
            if (feed.size()==10)    break;
            if (users[userId].find(postByTime[i][1])!=users[userId].end() || postByTime[i][1]==userId){
                feed.push_back(postByTime[i][0]);
            }
        }
        return feed;
    }
    
    void follow(int followerId, int followeeId) {
        users[followerId][followeeId]=1;
        
    }
    
    void unfollow(int followerId, int followeeId) {
        users[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */