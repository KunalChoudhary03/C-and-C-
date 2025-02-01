// #include<iostream>
// using namespace std;
// int main(){
// int a= 5 ;
//  int b = 6;
//  cout<<"number before swap"<<endl;
//  cout<<"a="<<a<<"b="<<b<<endl;
//  int temp = a;
//  a = b ;
//  b = temp;
//  cout<<"number after swap are a= "<<a << "and b= "<<b<<endl;
//  return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter the year";
//     cin>>year;
//     if(year%4==0 && year%100 != 0 || year % 400 ==0){
//         cout<<"Year is leap year";

//     }
//     else{
//         cout<<"year is not a leap year";
//     }
//     return 0;
// } 



// #include<iostream>
// using namespace std;
// //  int percent(int a ,int b , int c){
// //        cout<<(a+b+c)/3;
// //  }
// int main(){
//     int math,physics,chemistry;
//     cout<<"Enter the number of maths ";
//     cin>>math;
//     cout<<"Enter the number of physics ";
//     cin>>physics;
//     cout<<"Enter the number of chemistry ";
//     cin>>chemistry;
//     int  sum =  (math+physics+chemistry)/3;
//     cout<<"The percentage of student is "<<sum<<endl;
//        if(sum >=75){
//         cout<<"first division";
//     }
//     else if(sum<75 && sum >=50){
//         cout<<"second division";
//     }
//     else{
//         cout<<"pad lo beta abhi bahut kuch dekhna h..  jivan main ";
//     }
// } 
// #include<iostream>
// using namespace std;
// int main(){
//   int num;
//   cout<<"Enter the number ";
//   cin>>num;
//   if(num%2==0){
//     cout<<"number is even";

//   } 
//   else{
//     cout<<"number is odd";
//   } 
//   return 0;
// }
// #include<iostream>
// using namespace std;
//  int main(){
//     int a,b,c;
//     cout<<"Enter the value of a ";
//     cin>>a;
//     cout<<"Enter the value of b ";
//     cin>>b;
//     cout<<"Enter the value of c ";
//     cin>>c;
//     if(a>b && a>c){
//         cout<<"a grater the b and c";
//     }
//     else if(b>a && b>c){
//         cout<<"b is graeter ";
//     }
//     else {
//         cout<<"c is grater";
//     }
//  return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num = 0;
//     cout<<"Enter the value you want to print series";
//     cin>>num;
//     for(int i=num;i>=1;i--){
//         cout<<i;
//     }
//     return 0;
// }
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char str[100],str1[100];
//     cout<<"Enter the string"<<endl;
//     cin>>str;
//     cout<<"Enter the second string";
//     cin>>str1;
//     if(strcmp(str,str1)==0){
// cout<<"The strings are same";
//     }
// else{
//     cout<<"strings are different ";
// }
// return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//   string str  = "Kunal";
//     cout<<str.size()<<endl;
//     return 0;
// } 

// #include<iostream>
// #include<cmath>
// using namespace std;
// class calc{
//   int a ,b ;
//   public:
//  int getdata(){
//   cout<<"Enter the value of a"<<endl;
//   cin>>a;
//   cout<<"Enter the value of b"<<endl;
//   cin>>b;
//  }
//  void performOperation(){
//   cout<<"addition of a and b is "<<a+b<<endl;
//   cout<<"subtraction of a and b is "<<a-b<<endl;
//   cout<<"multiplication of a and b is "<<a*b<<endl;
//   cout<<"division of a and b is "<<a/b<<endl;
//  }
// };
// class scienceCalc{
//   int a ,b ;
//   public:
//  int getData(){
//   cout<<"Enter the value of a"<<endl;
//   cin>>a;
//   cout<<"Enter the value of b"<<endl;
//   cin>>b;
//  }
//  void perFormOperation(){
//   cout<<"cos of a and b is "<<cos(a)<<endl;
//   cout<<"sin of a and b is "<<sin(a)<<endl;
//   cout<<"tan of a and b is "<<tan(b)<<endl;
//   cout<<"cot of a and b is "<<exp(a)<<endl;
//  }
// };
// int main(){
// calc c1;
// scienceCalc c2;
// c1.getdata();
// c1.performOperation();
// c2.getData();
// c2.perFormOperation();

// return 0;
// }
// #include<iostream>
// using  namespace std;
// int main(){
//    int num ,last;
//    cout<<"Enter the number"<<endl;
//    cin>>num;
//    last  = num%10;
//    cout<<"The last number of digit is"<<last<<endl;
//    while (num>=10)
//    {
//     num = num/10;
//    }
//    cout<<"The first digit is "<<num<<endl;
// }
// #include<iostream>
// #include<string.h>
// using namespace std;

// int main(){
//   char string[10] = "KUNAL";
//   cout<<"The srting in lower case is "<<strlwr(string);
// } 



// #include<iostream>
// using namespace std;
// int main(){
//  int a ;
//  cout<<"Enter the age ";
//  cin>>a;
//  if(a=18){
// cout<<"you can drive";
//  }
//  else{
//   cout<<"you cant drive";
//  }
//   return 0;
// }