// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

void print_v(vector<int> v){ 
    for (int i : v){
   
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    
    cout << "Declaration: ";
    vector<int> v = {-1, 0, 1};
    print_v(v);
    cout << endl;
    
    cout << "Access: ";
    cout << v.front() << " " << v.at(1) << " " << v.back() << endl;
    cout << endl;
    
    cout << "Add: ";
    v.push_back(2);
    print_v(v);
    cout << endl;
    
    cout << "Change: ";
    v.at(1) = 9;
    print_v(v);
    cout << endl;
    v.at(1) = 0;
    
    cout << "Remove: ";
    v.pop_back();
    print_v(v);
    cout << endl;
    
    cout << "Clear: ";
    v.clear();
    print_v(v);
    cout << endl;
    
    cout << "Iterator: ";
    vector<int>::iterator iv;
    iv = v.begin();
    cout << *iv;
    
    return 0;
}
