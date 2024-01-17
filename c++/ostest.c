#include <stdio.h>
int main()
{
    int n, at[10], bt[10], tat[10], wt[10], ct[10];
    printf("Enter the number of processes\n");
    scanf("%d", &n);
    printf("Enter the burst time of the processes\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
        at[i] = 0;
    }
    ct[0] = 0;
    tat[0] = 0;
    wt[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ct[i] = ct[i - 1] + bt[i - 1];
        tat[i] = ct[i] - at[i - 1];
        wt[i] = tat[i] - bt[i - 1];
    }
    float bbt = 0, tatt = 0;
    printf("Process\tAT\tBT\tWT\tCT\tTAT\n");
    for (int i = 0; i < n; i++)
    {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, 0, bt[i], wt[i + 1], ct[i + 1], tat[i + 1]);
        bbt += wt[i + 1];
        tatt += tat[i + 1];
    }
    printf("Average waiting time = %.2f\n", bbt / n);
    printf("Average turnaround time = %.2f\n", (tatt / n));
    return 0;
}