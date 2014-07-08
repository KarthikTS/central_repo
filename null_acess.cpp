#include<iostream>

using namespace std;

void func_1(int (*f)(int)) { f(0);return; }
//above and below are same
//void func_1(int f(int)) { return; }

void func_2(char* p){ return; }
//void func_2(char* const p){ return; }

void func_3(char* p){return;}
void func_3(const char* p){return;}

void fun(const int &i)
{
    cout << "fun(const int &) called ";
}
void fun(int &i)
{
    cout << "fun(int &) called " ;
}

void swap(char * &str1, char * &str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}

int main()
{
  char *str1 = "GEEKS";
  char *str2 = "FOR GEEKS";
  swap(str1, str2);
  cout<<"str1 is "<<str1<<endl;
  cout<<"str2 is "<<str2<<endl;
  int *ptr;
   int &ref = *ptr;
   cout << ref;
   const int i=10;
   fun(i);
   int j=20;
   fun(j);

   char c='a';
   cout << ++c;
  return 0;
}
