#include <bits/stdc++.h>
using namespace std;

//FIfo first in first out
int main (){
    // all functions are O(1) time complexity
    queue<int > q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    q.back() += 5;
    q.pop();
   cout << q.size() << endl;
   cout << q.front() << endl;

   priority_queue<int > pq;
   pq.push(5);
   pq.push(2);
   pq.push(8);
   cout << pq.top() << endl;







}