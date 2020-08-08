#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum gender {male,female};
    enum gender myGender;
    myGender = male;
    enum gender anotherGender = female;
    int isMale = (myGender == anotherGender);
    printf("%d",isMale);
}
