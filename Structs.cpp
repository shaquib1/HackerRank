#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct Student{
    
    int age;
    string firstname;
    string lastname;
    int standard;

};

int main() {
   
   int age,standard;
   string firstname,lastname;
   
    Student std1;
    
   cin>>std1.age>>std1.firstname>>std1.lastname>>std1.standard;
   

   cout<<std1.age<<" "<<std1.firstname<<" "<<std1.lastname<<" "<<std1.standard;
   
       
    return 0;
}
