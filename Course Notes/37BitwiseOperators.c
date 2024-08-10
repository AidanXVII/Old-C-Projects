#include <stdio.h>
#include <string.h>

//It is STRONGLY recommended to know binary for this.

//Bitwise operator = used in bit-level programming.
// & = and
// | = or
// ^ = XOR (exclusive OR)
// << = left shift
// >> = right shift
// ~ = complement operator (HARD)


//Bit notation =    0   0   0   0  0  0  0  0 
//                128  64  32  16  8  4  2  1                             

int main(){

    int x = 6; //06 =  00000110
    int y = 12;//12 =  00001100 

    int z;
    z = x & y; //04 =  00000100 //x AND y must be 1 to flip one at that bit

    int w;
    w = x | y; //14 =  00001110 //x OR y must be 1 to flip one at given bit

    int i;
    i = x ^ y; //10 =  00001010 //x OR y, NOT both, must be 1 to flip. if both, return 0

    int j;
    j = x << 1;//06 =  00000110 => 12 = 00001100, shifted one (1) space left, effectively doubled

    int k;
    k = x >> 1;//06 =  00000110 => 03 = 00000011, shifted one (1) space right, effectively halved

    int l;
    l = k >> 1;//03 = 000000110 => 01 = 00000001, truncates since fractions are not considered.

    return 0;
}