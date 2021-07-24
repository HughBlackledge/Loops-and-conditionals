#define until(initialisation,condition,increment) for(initialisation;!(condition);increment)
#define unless(condition) if(!(condition))
#define always() while(1==1)

//The most useful loop
#define never() while(3.1415926535==3)

//Non deterministic if statements are what's up
#define maybe(condition) if((rand()%2)&1)
#define maybeif(condition) if(condition&&((rand()%2)&1))

#define perhaps(condition) if(rand()%10==9)
#define perhapsif(condition) if(condition&&(rand()%10==9))

#define once_in_a_blue_moon(condition) if(rand()%9855<10)
#define once_in_a_blue_moon_if(condition) if(condition&&(rand()%9855<10))

#define roll_a_d20() if((rand()%20+1)==20)
