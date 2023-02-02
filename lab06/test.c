 int *arr = array;
    for (; arr != &array[0] + size; arr++)
    {
        if (*arr == killedPrisoner)
        {
            *arr = 0;
        }
    }
    int *ArrayPtr2 = array;
    for (arr = array; arr != &array[0] + size; arr++)
    {
        if (*arr != 0)
        {
            int tmp = *arr;
            *arr = *ArrayPtr2;
            *ArrayPtr2 = tmp;
            ArrayPtr2++;
        }
    }