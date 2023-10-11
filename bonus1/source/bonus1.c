int main(int argc, char **argv)
{
    int returnValue;
    char buffer[40];
    int input;

    input = atoi(argv[1]);
    if (input < 10)
    {
        memcpy(buffer, argv[2], input * 4);
        if (input == 0x574f4c46)
        {
            execl("/bin/sh", "sh", 0);
        }
        returnValue = 0;
    }
    else
    {
        returnValue = 1;
    }
    return returnValue;
}