#include<stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
};

int main()
{

    struct Student harry, ravi, shubham;
    harry.id = 123;
    harry.marks = 99;
    harry.fav_char= 'h';
    ravi.id = 124;
    ravi.marks = 98;
    ravi.fav_char= 'r';
    shubham.fav_char= 125;
    shubham.fav_char= 97;
    shubham.fav_char= 't';
   return 0; 
}