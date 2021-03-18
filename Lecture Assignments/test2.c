#include <stdio.h>
int var1;
int main (void) {

	 int i;

			    var1 = 7;

				  

				      printf("%d ", var1);

						 

						     for ( i = 0; i < 2; ++i ) {

								          var1 = f1();

											         printf("%d ", var1);

														    }

															  

															      return 0;

  }

   

	int f1 (void) {

		    static int var1 = 1;

			     int var2 = 1;

				   

					    printf ("%i %i ", var1, var2);

						     ++var1;

							      var2 += 3;

									    printf ("%i %i ", var1, var2);

										  

										      return var2;

}
