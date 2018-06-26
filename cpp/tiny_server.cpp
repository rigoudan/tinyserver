#include "httplib.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    using namespace httplib;

    Server svr;

    char *wwwroot = argv[1];
    int port = 0;
    sscanf(argv[2],"%d",&port);

    svr.set_base_dir(wwwroot);

    svr.listen("localhost", port);
}