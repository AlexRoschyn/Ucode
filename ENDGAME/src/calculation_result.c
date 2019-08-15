

int calculation_result(int arg1, int arg2, char oper)
{
    int result = 0;

    if (oper == '+')
    {
        result = arg1 + arg2;
    }
    else if (oper == '-')
    {
        result = arg1 - arg2;
    }
    else if (oper == '*')
    {
        result = arg1 * arg2;
    }
    else if (oper == '/')
    {
        result = arg1 / arg2;
    }

    return result;
}

