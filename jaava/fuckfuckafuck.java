import java.util.*;
interface Internalmarks{
    void getinmarks();
    void showinmarks();
}
interface Externalmarks{
    void getexmarks();
    void showexmarks();
}

interface Marks extends Internalmarks,Externalmarks{
    void showTotalMarks();
}

class fuckfuckafuck implements Marks{
    int s1_i,s2_i,s3_i,s1_e,s2_e,s3_e;
    Scanner sc=new Scanner(System.in);
    public void getinmarks(){
        System.out.println("Enter the Internal Marks");
        s1_i=sc.nextInt();
        s2_i=sc.nextInt();
        s3_i=sc.nextInt();
    }
    public void showinmarks(){
        System.out.println("hello");
    }
    public void getexmarks(){
        System.out.println("Enter the Internal Marks");
        s1_e=sc.nextInt();
        s2_e=sc.nextInt();
        s3_e=sc.nextInt();
    }

    public void showexmarks(){
        System.out.println("hi");
    }

    public void showTotalMarks(){
        System.out.println("total Marks");
        System.out.println("s1\t"+s1_i+"\t"+s1_e+"\t" +s1_i+s1_e);
        System.out.println("s2\t"+s2_i+"\t"+s2_e+"\t" +s2_i+s2_e);
        System.out.println("s3\t"+s3_i+"\t"+s3_e+"\t" +s3_i+s3_e);
    }
    public static void main(String args[]){
        fuckfuckafuck f=new fuckfuckafuck();
        f.getinmarks();
        f.getexmarks();
        f.showinmarks();
        f.showexmarks();
        f.showTotalMarks();
    }
 }