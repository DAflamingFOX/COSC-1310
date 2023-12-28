#include <stdio.h>
struct address
{
    char name[31];
    char add1[31];
    char add2[31];
    char city[11];
    char state[3];
    char zip[11];
};

int main()
{
    struct address myaddress = {"Bradley Jones",
                                "RTSoftware",
                                "P.O. Box 1213",
                                "Carmel", "IN", "46082-1213"};
    struct address youraddress = {  "Jeffrey Morris",
                                    "AuroraBotics",
                                    "P.O. Box 54",
                                    "Glen Rose", "TX", "76043-0054"};

    struct address *ptr1, *ptr2;
    ptr1 = &myaddress;
    ptr2 = &youraddress;

    printf("%s\n%s\n%s\n%s, %s %s\n",
            myaddress.name,
            myaddress.add1,
            myaddress.add2,
            myaddress.city,
            myaddress.state,
            myaddress.zip);
    printf("\n");
    printf("%s\n%s\n%s\n%s, %s %s\n",
            youraddress.name,
            youraddress.add1,
            youraddress.add2,
            youraddress.city,
            youraddress.state,
            youraddress.zip);
    printf("\n");
    printf("%s\n%s\n%s\n%s, %s %s\n",
            ptr1->name,
            ptr1->add1,
            ptr1->add2,
            ptr1->city,
            ptr1->state,
            ptr1->zip);
    printf("\n");
    printf("%s\n%s\n%s\n%s, %s %s\n",
            ptr2->name,
            ptr2->add1,
            ptr2->add2,
            ptr2->city,
            ptr2->state,
            ptr2->zip);
    printf("\n");

    return 0;
}
