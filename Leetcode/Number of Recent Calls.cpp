class RecentCounter {
public:
    queue<int>temp;
    RecentCounter() {
     
    }
    int ping(int t) {  
        temp.push(t);
        while(temp.front()<t-3000)
        {
            temp.pop();
        }
        return temp.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */