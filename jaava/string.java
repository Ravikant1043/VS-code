import java.util.Scanner;
class string {
    public static boolean ispal(String s){
        char ss[] = s.toCharArray();
        int n=s.length();
        for(int i=0;i<n/2;i++){
            if(ss[i]!=ss[n-i-1])return false;
        }
        return true;
    }
    // public static void printing(String ss)
    // {
    //     char s[]=ss.toCharArray();
    //     int n=ss.length();
    //     for(int i=0;i<n;i++){
    //         for(int j=i;j<n;j++){
    //             for(int k=i;k<=j;k++){
    //                 char s[]=ss.toCharArray();
    //             }
    //             System.out.println();
    //         }
    //     }
    // }
    public static void pp(String ss){
        char s[]=ss.toCharArray();
        int n=ss.length();
        for(int i=1;i<(1<<n);i++){
            for(int j=0;j<n;j++){
                if((i&(1<<j))!=0 ){
                    System.out.print(s[j]);
                }
            }
            System.out.println();
        }
    }

   public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String ans;
        ans=sc.nextLine();
        // System.out.println(ispal(ans));

        // int i=0;
        // String t;
        // int n=ans.length();
        // for(int i=0;i<n;i++)
        // String an[]=ans.split(" ");
        // for(String sst:an){
        //     if(ispal(sst)==true){
        //         System.out.println(sst+"  ");
        //     }
        // }
        pp(ans);
        // an.split(ans);

    }    
}
