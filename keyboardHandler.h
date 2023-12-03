

void *keyboardHandlerThreadExecute(void *vargp)
{
    while (1)
    {
        char key = getchar();
        printf("key pressed->%c\n", key);
        switch (key)
        {
        case 'y':
            break;
        case 'n':
            break;
        case 'r':
            break;
        case 'k':
            break;
        case 'z':
            changeSimulateOverPressure();
            break;
        case 'x':
            changeSimulateOverTemperature();
            break;
        case 'c':
            break;
        case 'f':
            break;
        case 'p':
            break;
        case 't':
            break;
        case '1':
            changeSimulateSmoke1();
            break;
        case '2':
            changeSimulateSmoke2();
            break;
        default:
            break;
        }
    }
}