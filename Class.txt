#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    public:
    int age;
    string first;
    string last;
    int standard;
};


int main() {
   int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.age=age;
    st.standard=standard;
    st.first=(first_name);
    st.last=(last_name);
    
    cout << st.age << "\n";
    cout << st.last << ", " << st.first<< "\n";
    cout << st.standard << "\n";
    cout << "\n";
    cout << st.age<<","<<st.first<<","<<st.last<<","<<st.standard;
    
    return 0;
}
