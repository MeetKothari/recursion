include <stdio.h>

int product( int m , int n ) ;

int main( int argc, char *argv[] ){

  int a , b , result ;

  printf( "\nEnter two numbers to find their product: \n\n" ) ;

  scanf( "%d%d", &a , &b ) ;

  result = product( a , b ) ;

  printf( "\nProduct of %d and %d is %d\n\n", a, b , result ) ;

  return 0 ;
}
 
int product( int m , int n ){

  if ( m < n ) return product ( n, m ) ;

  else if ( n != 0 ){

    return ( m + product( m , n - 1 ) ) ;

  }

  else return 0 ;

}
