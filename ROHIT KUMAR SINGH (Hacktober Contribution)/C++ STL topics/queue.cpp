//Implementation of QUEUE and priority_queue

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main()
{   
    //Declaration of queue
    queue<int> q;

    //Pushing elements into the queue
    q.push(10);
    q.push(10);
    q.push(200);
    q.push(3000);
    q.push(40000);

    //For displaying elements 
    cout<<"\n*****QUEUE ELEMENTS ARE*****\n"<<endl;
    while(q.size() != 0)
    {
        cout<<q.front()<<endl;
        
        /* prints only the last element of the queue
        cout<<q.back()<<endl;  */

        q.pop();
    }

    cout<<"\n\n*****PRIORITY QUEUE*****\n"<<endl;
    priority_queue<int> pq;
    //priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(10);
    pq.push(200);
    pq.push(3000);
    pq.push(40000);

    //For displaying elements 
    cout<<"*****PRIO_QUEUE ELEMENTS ARE*****\n"<<endl;
    while(pq.size() != 0)
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}