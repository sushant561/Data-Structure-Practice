
#include <iostream>
using namespace std;
#include <deque>

void showdq(deque<int> g){
    deque<int>::iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout<< "\t"<< *it;
    cout<< "\n";
}

int main() {
    deque<int> dd;
    
    dd.push_back(10);
    dd.push_front(20);
    dd.push_back(30);
    dd.push_front(15);
    
    cout<< "the deque dd is : ";
    showdq(dd);
    
    cout<<dd.size();
    cout<<dd.front();
    cout<<dd.back();
    
    dd.pop_front();
    showdq(dd);
    
    dd.pop_back();
    showdq(dd);

    return 0;
}