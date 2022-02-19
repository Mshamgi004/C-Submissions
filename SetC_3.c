// SET C //
// C PROGRAM TO CREATE A RANDOM SENTENCE GENERATOR //
// 20 RANDOM SENETENCES //




// TASK 3 //




#include <stdio.h>
#include <stdlib.h>


#define SIZE 5

void sentenceGenerator(const char *const art[],  const char *const noun[],
                       const char *const verb[], const char *const prep[])
{
   int i;
   for ( i = 0;  i <= 40; i++ )
   {
      printf( "%s %s %s %s %s %s\n",
              art  [rand() % SIZE],
              noun [rand() % SIZE],
              verb [rand() % SIZE],
              prep [rand() % SIZE],
              art  [rand() % SIZE],
              noun [rand() % SIZE]);
   }
}

int main()
{
   const char *art [SIZE] = { "the", "a", "one", "some", "any",};
   const char *noun[SIZE] = { "boy", "girl", "dog", "town", "car",};
   const char *verb[SIZE] = { "drove","jumped", "ran", "walked", "skipped",};
   const char *prep[SIZE] = { "to", "from", "over", "under", "on",};
   srand(0);
   sentenceGenerator( art, noun, verb, prep );
   return 0;
}
