// // #include<iostream>
// // using namespace std;
// // class name{
// // int x;
// // public:
// // void set(int n){
// //     x = n;
// // }
// // int get(){
// //     return x;
// // }
// // };
// // int main(){
// // name n1;
// // n1.set(6);
// // cout<<n1.get();

// //  }
// #include<iostream>
// using namespace std;
// class add{
//     public:
//  void sum(int a , int b){
//     int sum = a + b;
//     cout<<sum<<endl;
//  }
//  void sum(int a , int b ,int c){
//     int sum = a + b + c;
//     cout<<sum<<endl;
//  }
//  void sum(float a , float b){
//     float sum = a + b;
//     cout<<sum<<endl;
//  }
// };
// int main()
// {
//     add a;
//     a.sum(3,4);
//     a.sum(3,4,5);
//     a.sum(float(3.5),float(4.2));

//     return 0;
// } 


// #include<iostream>
// using namespace std;
// class Base{
//  int data1;
//  public:
//  int data2;
//  void setData();
//  int getData1();
//  int getData2();
// };
// void Base :: setData(void){
//    data1 = 10;
//    data2 = 60;
// }
// int Base :: getData1(){
//    return data1;
// }
// int Base :: getData2(){
//    return data2;
// }
// class Derived :public Base{
// int data3;
// public:
// void process();
// void display();

// };
// int main(){

// }
#include<iostream>
using namespace std;
class person{
private:
string name;
int age;
public:
person(string name ,int age){
   this->name = name ;
   this->age = age;
}
void setData(string name){
   this->name = name;
}
string getData(){
   return name;
}
void setage(string name){
   this->age = age;
}
int getage(){
   return age;
}
};
int main(){
person p("kunal",32);
cout<<p.getData()<<endl;
cout<<p.getage()<<endl;
return 0;
}