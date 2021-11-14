#include <stdio.h>
int lesson2x5(void)
{printf("Lesson 1-3 run");
return 0;}
int Lesson5(void)
{
    // random
    srand(time(NULL));
    int x = rand();
    printf(" random: %d", x);
return 0;
}
int lesson4()
{
  /*
  for ( variable initialization; condition; variable update ) {
    Code to execute while the condition is true
  }
  */
  //for loops
  for(int x = 0; x<10; x++){
    printf( "for loop: %d\n", x );
  }
  /*
  while ( condition )
  {
    Code to execute while the condition is true
  }
  */
  int y = 0;
  while (y < 10 ) { /* While x is less than 10 */
    printf( "while loop: %d\n", y );
    y++; /* Update x so the condition can be met eventually */
  }
  int z = 0;
  do {
    /* "Hello, world!" is printed at least one time even though the condition is false */
    printf("only once\n" );
  } while ( z != 0 );

  int a = 0;
  do {
    /* does it once even it is false then because of a++ it will run again */
    printf("Time: %d \n", a );
    a++;
  } while ( a == 1 );
  // using break
  while(1 == 1){
    if(1 == 0){
      printf("this should not print\n");
      break;
    }
    printf("this should print 1\n");
    if(1 == 1){
      printf("this should print 2\n");
      break;
    }
  }
  printf("While loop breaken\n");
  // using continue
  printf("6 should be skipped");
  for(int b = 0; b<10; b++){
    if(b==6){continue;}
    printf( "for loop: %d\n", b );
  }

return 0;
}
int Lesson3()
{
  //|| is or
  //&& is and
  // or is read after and
  int age;                          /* Need a variable... */

  printf( "Please enter your age: " );  /* Asks for age */
  scanf( "%d", &age );                 /* The input is put in age */
  if ( age < 100 ) {                  /* If the age is less than 100 */
    printf ("You are pretty young!\n" ); /* Just to show you it works... */
  }
  else if ( age == 100 ) {            /* I use else just to show an example */
    printf( "You are old\n" );
  }
  else {
    printf( "You are really old\n" );     /* Executed if no other statement is */
  }
return 0;
}
int lesson2()
{
  //Print to console/comand line
  printf("I am alive!  Beware.\n");
  // Varibles
  int x;
  char letter;
  float y;
  //Waits for input to see output


  int numInput;
  printf("Please enter a number: ");//print
  printf("%p\n", (void *)&numInput);// see if it changes
  scanf("%d", &numInput); //outputs to var, "%d" means integer, tells where in memorry the var needed to be changed
  printf("%p\n", (void *)&numInput);//see if it changes
  printf("You entered %d\n", numInput);// says print text then the num input as a integer
  printf("%d\n", numInput);

  char charInput;
  printf("\nPlease enter a char: ");//print
  printf("%p\n", (void *)&charInput);// see if it changes
  charInput = getchar(); //Sets char var to output of get char
  printf("%p\n", (void *)&charInput);// see if it changes
  printf("You entered %c", charInput);// says print text then the num input as a integer
  printf("%c",charInput);
  getchar();
return 0;
}
