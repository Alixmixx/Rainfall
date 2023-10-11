void getInput(char *destination, char *input)
{
    char *newlinePos;
    char buffer[4104];

    puts(input);
    read(0, buffer, 4096);
    newlinePos = strchr(buffer, '\n');
    *newlinePos = '\0';
    strncpy(destination, buffer, 20);
    return;
}

void processStrings(char *result)
{
    char currentChar;
    unsigned int counter;
    char *resultPtr;
    char firstInput[20];
    char secondInput[20];

    getInput(firstInput, &DAT_080486a0);
    getInput(secondInput, &DAT_080486a0);
    strcpy(result, firstInput);
    counter = 0xffffffff;
    resultPtr = result;
    do
    {
        if (counter == 0)
            break;
        counter--;
        currentChar = *resultPtr;
        resultPtr = resultPtr++;
    } while (currentChar != '\0');
    *(char *)(result + (~counter - 1)) = 32;
    strcat(result, secondInput);
    return;
}

int main(void)
{
    char finalResult[54];

    processStrings(finalResult);
    puts(finalResult);
    return 0;
}