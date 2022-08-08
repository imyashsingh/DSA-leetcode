// https://leetcode.com/problems/time-based-key-value-store/
// Time Based Key-Value Store





class TimeMap {
public:
    TimeMap() {
        
    }
    map <string,vector<pair<int,string>>> mp;
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        int n=mp[key].size();
        int s=0,e=n-1,mid;
        string st="";
        while(s<=e){
            mid = s+(e-s)/2;
            if(mp[key][mid].first == timestamp)
                return mp[key][mid].second;
            else if(mp[key][mid].first < timestamp){
                st = mp[key][mid].second;
                s=mid+1;
            }
            else
                e=mid-1;
        }
        return st;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */