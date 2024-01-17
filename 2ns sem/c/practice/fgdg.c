if(count==2)
        {
            while(a!=0)
            {
                j=a%10;
                m=0;
                for(k=1;k<=j;k++)
                {
                    if(j%k==0)
                    m++;
                    if(m==2)
                    {
                        printf("Mega Prime");
                        return 0;
                    }
                }
                a/=10;
            }
        }else
    {printf("Not Mega Prime");
    return 0;
    }
    return 0;
}