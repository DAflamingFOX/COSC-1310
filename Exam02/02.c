#include <stdio.h>

int main()
{
    int a[50]={0}, i,c;
    for( i=0; i<50; i++ ){
        if( a[i]==0 )
            a[i]=3*i+1;}
    for( c=0; c<50; i++ )
        printf( "%5d", a[i] );
    printf( "\n\n" );

    return 0;
}
