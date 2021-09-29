#include <stdio.h>
#include <stdlib.h>

int factorial( int n ) ;

int main( int argc, char *argv[] ){

  int n , fact ;

  n = atoi( argv[1] ) ;

  fact = factorial( n ) ;

  printf( "\nThe factorial is %d.\n\n", fact ) ;

  return 0 ;

}

  int factorial( int n ){

    if ( n == 0 ) return 1 ;

    else

      return n * factorial( n-1 ) ;

  }
