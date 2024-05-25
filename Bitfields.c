/*
(1 byte=8 bits)

Bit Field:
    use memory efficiently when we j=know that the value of a field/grp of fields will never 
    

syntax:
    struct/union
    {
        data_type member_name :width_of bit_field;
    }
    
data_type: it is an integer type that dtermines the bit-field-value which is to be interpreted.
member_type:
width_of: it is the size of the bit-field.

/if date value is more than 31, it is reinitialized form 0-31. Same goes for month but note for year as bit field is not mentioned.
but according to old compiler and pesu it will give error.
overflow is not cosidered./

Properties:(more notes slides)
--overflow.
--address of bitfield are not allowed.
--array of bit fields are not allowed or possible.
--Pointer are invalid.
--bit-field size is not allowed.

Eg;
unsigned int s1:1
data_type(unsigned int)
member_name(s1)
width(1) (2^n-1)

*/

//

#include<stdio.h>
/*
struct date
{
    unsigned  int d;     
    unsigned  int m;    
    unsigned  int y;
};                                          

int main()
{
    printf("%d",sizeof(struct date ));
    return 0;
}
*/
/*
//Case2:

//int - 4 bytes = 32 bits
//d +m ; 9 bits ; 32-9 = 23 bits (padded)
//bits values have to be multiples of 4 or 8.
struct date2
{
    unsigned  int d:5;     //(2^5)-1 : 32-1 :0 to 31
    unsigned  int m:4;     //(2^4)-1 : 16-1 :0 to 15
    //padding of 23 bits
    unsigned  int y;
};

int main()
{
    printf("%d",sizeof(struct date2 ));
    return 0;
}
*/

//case3:
/*struct date2
{
    unsigned  int d:5;     //(2^5)-1 : 32-1 :0 to 31
    unsigned  int m:4;     //(2^4)-1 : 16-1 :0 to 15
    //padding of 23 bits
    unsigned  int y;
};

int main()
{
    printf("%d",sizeof(struct date2 ));
    //printf(date);
    return 0;
}               //if date value is more than 31, it is reinitialized form 0-31. Same goes for month but note for year as bit field is not mentioned

*/

//Case4:

/*struct date2
{
    unsigned  int d:5;     //(2^5)-1 : 32-1 :0 to 31
    unsigned int :0;     
    unsigned  int m:4;     //(2^4)-1 : 16-1 :0 to 15
    //padding of 23 bits
    unsigned  int y;
};

int main()
{
    printf("%d",sizeof(struct date2 ));
    return 0;
}   */

//Case5:

struct date2
{
    unsigned  int d:5;     //(2^5)-1 : 32-1 :0 to 31
    unsigned  int m:4;     //(2^4)-1 : 16-1 :0 to 15
    //padding of 23 bits
    unsigned  int y;
};

int main()
{
    printf("%d",sizeof(struct date2 ));
    printf("%d");
    return 0;
} 
//taking address of bit field variables are not allowed.
//array of bit fields are not allowed or possible.
//Pointer are invalid