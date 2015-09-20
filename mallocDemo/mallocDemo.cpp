// mallocDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "windows.h"
#include <iostream>
using namespace std;
int _tmain( int argc , _TCHAR* argv[] )
{
    char *test = (char*)malloc( 1024*1024*100 );
    printf( "%p" , test );
    system( "pause" );
    //free( test );
    return 0;
}

