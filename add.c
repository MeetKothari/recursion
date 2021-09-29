#include <stdio.h>
#include <stdlib.h>

int add( int m , int n ) ;

int main( int argc , char *argv[] ){

  int a , b ;

  a = atoi( argv[1] ) ;

  b = atoi( argv[2] ) ;

  printf( "\nThe sum of the two numbers is %d \n\n", add( a , b ) ) ;

  return 0 ;

}

int add ( int m, int n ){

  int i ;

  for ( i = 0 ; i < n ; i++ ) m++ ;

  return m ;

}
