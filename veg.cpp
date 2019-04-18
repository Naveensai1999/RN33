#include<stdio.h>

int main()
{
      int f[10], t[10], p[10];
      int tp, i, j, position, k, s, tf;
      int m = 0, n = 0, pf = 0;
      printf("\nenter the number of total frames:\t");
      scanf("%d", &tf);
      for(i = 0; i < tf; i++)
      {
            f[i] = -1;
      }
      printf("enter the number of total pages:\t");
      scanf("%d", &tp);
      printf("references string values:\n");
      for(i = 0; i < tp; i++)
      {
            printf("Value No.[%d]:\t", i + 1);
            scanf("%d", &p[i]);
      }
      for(j = 0; j < tp; j++)
      {
            m = 0, n = 0;
            for(i = 0; i < tf; i++)
            {
                  if(f[i] == p[j])
                  {
                        m = 1;
                        n = 1;
                        break;
                  }
            }
            if(m == 0)
            {
                  for(i = 0; i < tf; i++)
                  {
                        if(f[i] == -1)
                        {
                              f[i] = p[j];
                              n = 1;
                              break;
                        }
                  }
            }
            if(n == 0)
            {
                  for(i = 0; i < tf; i++)
                  {
                        t[i] = 0;
                  }
                  for(k = j - 1, s = 1; s <= tf - 1; s++, k--)
                  {
                        for(i = 0; i < tf; i++)
                        {
                              if(f[i] == p[k])
                              {
                                    t[i] = 1;
                              }
                        }
                  }
                  for(i = 0; i < tf; i++)
                  {
                        if(t[i] == 0)
                        position = i;
                  }
                  f[position] = p[j];
                  pf++;
            }
            printf("\n");
            for(i = 0; i < tf; i++)
            {
                  printf("%d\t", f[i]);
            }
      }
      printf("\n number of total page faults :\t%d\n", pf);
      return 0;
}
