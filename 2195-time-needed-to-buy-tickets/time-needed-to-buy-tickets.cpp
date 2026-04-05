class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        int count=0;
        for(int i=0;i<tickets.size();i++)
        {
            q.push(i);
        }
        while(tickets[k]!=0)
        {
           
           tickets[q.front()]--;
           count++;
           if(tickets[q.front()])
           {
            q.push(q.front());
            q.pop();
           }
           else{
            q.pop();
           }
        }
        return count;
    }
};