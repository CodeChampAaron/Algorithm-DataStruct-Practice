#include<bits/stdc++.h>

using namespace std;
int main(){
    pair <int , int> p = {1,4};
    cout << p.first << " " << p.second << endl;
    pair < int , pair <int , int > > pdouble = {1, p};
    cout << pdouble.first << " " << pdouble.second.first << " " << pdouble.second.second << endl;
    pair <int , int >  arr[] = {{69, 420}, {69, 420}};
    cout << arr[1].first << endl;



}