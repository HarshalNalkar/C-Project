#include <stdio.h>

int main()
{
    float c = 4.0;
    printf ("Temperature in Fahrenheit is %.2f", (3/4)*c + 25);
  
    //beacuse division contain the intger value, it do not contain foalt value.
    // (3/4)*4.0+25 --> (int/int)*float+int
    //   0*4.0+25   -->   int*float+int
    //   25         -->    int   
  return 0;
}
