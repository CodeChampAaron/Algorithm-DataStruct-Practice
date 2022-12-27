#include <bits/stdc++.h>
using namespace std;
int main (){
    vector <int > numbers(26, 6);
    numbers.erase(numbers.begin()+ 1);
    cout << numbers.size() << endl;
    numbers.insert(numbers.begin(), 300);
    numbers.insert(numbers.begin() + 1, 2, 10);
    vector <int > copy (2, 69);
    numbers.insert(numbers.begin(),copy.begin(), copy.end());
    cout << numbers.size() << endl;
    numbers.swap(copy);
    cout << numbers.size() << endl;
    numbers.clear() ;
    cout << numbers.empty()<< endl;
    
    return 0;

}