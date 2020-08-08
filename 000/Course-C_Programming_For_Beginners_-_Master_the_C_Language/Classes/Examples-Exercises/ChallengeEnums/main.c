#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    // ENUM ENUM_NAME VARIABLE NAME = ENUM MEMBER;
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("The xerox enum: %d google: %d, ebay: %d", xerox, google, ebay);

    return 0;
}
