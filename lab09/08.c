void reportStock(char *filed)
{

    char line[100], day[10], time[10], pn[30];
    double cost;
    int amo, count = 0, name;
    FILE *fin;
    fin = fopen(filed, "r");

    fscanf(fin, "%d", &name);

    Product today[name];

    while (fgets(line, 100, fin) != NULL)
    {
        sscanf(line, "%10[^,],%10[^,],%30[^,],%d,%lf\n", day, time, pn, &amo, &cost);

        if (count > 0)
        {
            Product subset;
            strcpy(subset.name, pn);
            subset.amount = amo;
            subset.totalCost = cost;

            word_count(today, subset);
        }
        count++;
    }

    fclose(fin);

    printStock(today, name);
}

void word_count(Product *code, Product target)
{

    for (find = 0; data[find].count; find++)
    {
        if (!strcmp(data[find].word, input))
        {
            data[find].count++;
            last_word = 1;
        }
    }

    if (last_word != 1)
    {
        data[find].count = 1;
        strcpy(data[find].word, input);
    }

    int i, flag = 0;
    static int index = 0;

    for (i = 0; code[i].amount; i++)
    {
        if (!strcmp(target.name, code[i].name))
        {
            code[i].amount += target.amount;
            code[i].totalCost += target.totalCost;
            flag = 1;
        }
    }

    if (flag != 1)
    {
        strcpy(code[index].name, target.name);
        code[index].amount = target.amount;
        code[index].totalCost = target.totalCost;
        index++;
    }
}