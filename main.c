#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  color c;
  c.green = 255;
  clear_screen(s);
  struct matrix * edges;
  struct matrix * transform;

  edges = new_matrix(4,4);
  transform = new_matrix(4,4);

//my testing:
  // // print_matrix(edges);
  // generate_curve_coefs(1,2,3,4,0);
  // add_edge(edges,100,100,0,200,200,0);
  // add_curve(edges,100,100,200,200,150,250,175,225,0.001,1);
  // draw_lines(edges,s,c);
  // // edges = generate_curve_coefs(20,30,40,50,1);
  // // printf("\n\n");
  // // print_matrix(edges);
  // display(s);

  /* print_matrix(make_rotX(M_PI/4)); */
  /* printf("\n"); */
  /* print_matrix(make_rotY(M_PI/4)); */
  /* printf("\n"); */
  /* print_matrix(make_rotZ(M_PI/4)); */
  /* printf("\n"); */

  if ( argc == 2 )
    parse_file( argv[1], transform, edges, s );
  else
    parse_file( "stdin", transform, edges, s );


  free_matrix( edges );
  free_matrix( transform );

}
