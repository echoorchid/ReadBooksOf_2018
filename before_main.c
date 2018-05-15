#include <stdio.h>   
__attribute((constructor)) void before_main()  
{  
    printf("%s:%d\n",__FUNCTION__,__LINE__);   
}   
__attribute((destructor)) void after_main()  
{  
    printf("%s:%d\n",__FUNCTION__,__LINE__);  
}   
int main( int argc, char ** argv )  
{  
    printf("%s:%d\n",__FUNCTION__,__LINE__);  
    return 0;  
}  