#include "c_test.h"
#include "iostream.h"
#include "stdio.h"
#include "application.h"

void main(){
  char testChar[200];
//  String testStr;
  printf("Enter a string: ");
  gets(testChar);
  print_line(testChar);
}
