/*
Enumeration:
-->user-defined data type in c to assign names to the integral constants.
-->makes the programme easy to read and maintain.
-->sizeof the different enumerator will all be 4 bytes as it is integer type.
-->Declaration:
    enum days{Sun,Mon,Tue,Wed,Thur,Fri,Sat};            <<dont use any double quotes.>>
    keyword enum_variable enumerators{constants separated by commas}
    (uninitailized values)starts from 0 and the next value is previous value +1.
    initialized values are not changed.
-->Instantiation:
    enum days d;
    eg.: d=Wed;
        printf("%d",d);   <<o/p-->3>>
-->Properties:
    -->default start is 0 if value not defined.
    -->Inside enum 2 names can have the same value.
    -->(uninitailized values)starts from 0 and the next value is previous value +1.
    initialized values are not changed.
    -->All enum constants have to have unique name.(have to be unique in their scope).
    -->enum object takes only one value at a time.
    -->you can combine 2 or more flags without overlapping using or(|) operator.
    -->For using 1/more flags enums are initialized with the integral values as powers of 2.*/

#include<stdio.h>

enum days
{
    Sun,Mon,Tue,Wed,Thur,Fri,Sat
};

enum year
{
    Jan,Feb,Mar,Apr,May,Jun,Jul,Aus,Sept,Oct,Nov,Dec
};

enum sample
{
    test1=10,test2,test3=20,test4,test5=100
};//initialized values dont changed (given priority)

enum state
{
    Working=1,Failed=0,Freezed=0
};//2 enums can have the same value.

/*enum state_1
{
     Failed=0,Passed=1,Working=1
};//all enum constants should have a unique name.
*/

enum cards
{
    clubs=0,hearts=10,spades=30,diamond=20
};//sizeof the different enumerator will all be 4 bytes as it is integer type.

enum flags
{
    Italics=1,
    Bold=2,
    Underline=4
};//you can combine 2 or more flags without overlapping using or(|) operator.

int main()
{
    // enum days d;
    // d=Wed;
    // printf("%d",d);  // <<o/p-->3>>

    // enum year y;
    // for(int i=Jan;i<=Dec;i++)
    // {
    //     printf("%d",i);
    // }

    // enum cards c;
    // c=clubs;
    // printf("%d",sizeof(c));  


}