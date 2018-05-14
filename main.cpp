#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class A{

public:
    A(){

        p = new char[20];

        strcpy(p,"obja");

        cout<<"A()"<<endl;

    }

  virtual  ~A(){//老祖宗类处变为析构函数

        delete [] p;
          cout<<"~A()"<<endl;
    }

   private:
        char *p;


};
class B:public A{

public:
    B(){

        p = new char[20];

        strcpy(p,"obja");

          cout<<"B()"<<endl;
    }

    ~B(){

        delete [] p;
          cout<<"~B()"<<endl;
    }

   private:
        char *p;


};
class C:public B{

public:
    C(){

        p = new char[20];

        strcpy(p,"obja");

        cout<<"C()"<<endl;

    }

    ~C(){

        delete [] p;

       cout<<"~C()"<<endl;
    }

   private:

        char *p;


};
void howtodelete(A *base){

    delete  base;


}
int main()
{
  C *myC = new C;

   howtodelete(myC);
    return 0;
}

