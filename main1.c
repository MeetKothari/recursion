#include "globals.h"
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

status times10( generic_ptr ptr ) ;

status write_int( generic_ptr ptr ) ;

int main( int argc, char *argv[] ) {

  list L ;

  int *p_n1, *p_n2, *p_n3, *p_n4 ;

  init_list( &L ) ;

 p_n1 = (int *) malloc( sizeof( int ) ) ;
 p_n2 = (int *) malloc( sizeof( int ) ) ;
 p_n3 = (int *) malloc( sizeof( int ) ) ;
 p_n4 = (int *) malloc( sizeof( int ) ) ;

 *p_n1 = 6 ;
 *p_n2 = 511 ;
 *p_n3 = 573 ;
 *p_n4 = 586 ;

 insert( &L, (generic_ptr) p_n1 ) ;
 insert( &L, (generic_ptr) p_n2 ) ;
 insert( &L, (generic_ptr) p_n3 ) ;
 insert( &L, (generic_ptr) p_n4 ) ;

 traverse( L, times10 ) ;
 traverse( L, write_int ) ;

 return 0 ;

}

status times10( generic_ptr ptr ) {

  int n ;

  n = *( int * )ptr * 10 ;

  *(int *)ptr = n ;

  return OK ;

}

status write_int( generic_ptr ptr ) {

  printf( " %d ", *(int *)ptr ) ;

  return OK ;
}
