import java.util.*;
class array_read {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n,a[];
        n=sc.nextInt();
        a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        // int m=Integer.MIN_VALUE;
        // int t=m;
        // for(int i=0;i<n;i++){
        //     m=Integer.max(m, a[i]);
        // }
        
        // for(int i=0;i<n;i++){
        //     if(t<a[i] && a[i]<m)t=a[i];
        // }
        // System.out.println(m);
        // System.out.println(t);


        int k;
        k=sc.nextInt();

        for(int i=0;i<n/2;i++){
            int kp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=kp;
        }

        

    }
}
