#include <iostream>
#include <string>
#include "CppSample.h"
#include <stdio.h>
#include "Sample.h"
#include "SampleAccessMethod.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "C++ Project Start!" << endl;

    //int a;
    //cin >> a;
    //cout << "a=" << a << endl;

    //string s, t;
    //t = "���͂��ꂽ�����́A";
    //cout << "����������: ";
    //cin >> s;
    //cout << t + s << "�ł��B" << endl;

    //CppSample obj;
    //int num;
    //cout << "��������͂��ĉ�����:" << endl;
    //cin >> num;
    //obj.set(num);
    //cout << obj.get() << endl;

    //CppSample obj1, obj2;
    //obj1.set(1);
    //obj2.set(2);
    //cout << obj1.get() << endl;
    //cout << obj2.get() << endl;

    //Sample s;
    //s.a = 1;
    ////s.b = 2; <- private �Ȃ̂ŌĂяo���s��
    //s.func1();
    ////s.func2(); <- private �Ȃ̂ŌĂяo���s��

    SampleAccessMethod sam;
    sam.setNum(5);
    cout << sam.getNum() << endl;

    //string s;
    //s = "This is a";
    //s.append(" pen.");
    //cout << s << endl;
    //cout << "Length is " << s.length() << endl;
    //printf("char*:%s\n", s.c_str());

    return 0;
}
