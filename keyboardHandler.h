

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
            break;
        case 'x':
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
            break;
        case '2':
            break;
        default:
            break;
        }
    }
}