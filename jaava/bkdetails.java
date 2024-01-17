import java.util.*;
class Account
{
    String acno,cname;
    double bal;

    public Account(String acno,String cname , double bal){
        this.acno=acno;
        this.cname=cname;
        this.bal=bal;
    }
    public String getAcno(){
        return acno;
    }
    public double getbal(){
        return bal;
    }
    public void displayAccount(){
        System.out.println(acno+" "+cname+" "+bal);
    }
}

class bkdetails {
    static String bnam="Sexy Ravikant's Bank";
        Account cust[]=new Account[10];
        int i=0;

    public void addcust(Account a){
        cust[i]=a;
        i++;
    }
    public void deposit(String acno,double amt){
        int j=0;
        for(j=0;j<i;j++){
            if(acno.equals(cust[j].getAcno())){
                cust[j].bal+=amt;
                break;
            }
        }
        if(j==i){
            System.out.println("Invalid accno");
        }
    }
    public void transfer(String sacno,String racno,double amt){
        int j=0,p=-1,q=-1;
        for(;j<i;j++){
            if(sacno.equals(cust[j].getAcno()))p=i;
            if(racno.equals(cust[j].getAcno()))q=i;
        }
        if(p==-1 || q==-1){
            System.out.println("Invalid data");
        }
        else{
            cust[p].bal-=amt;
            cust[q].bal+=amt;
        }
    }
    public void display(String acno){
        int j=0;
        for(;j<i;j++){
            if(acno.equals(cust[j].getAcno())){
                cust[j].displayAccount();
                break;
            }
        }
        if(j==i)System.out.println("The data is invalid");
    }
    public void withdraw(String acno,double amt){
        int j=0;
        for(j=0;j<i;j++){
            if(acno.equals(cust[j].getAcno())){
                cust[j].bal-=amt;
                break;
            }
        }
        if(j==i){
            System.out.println("Invalid accno");
        }
    }
    public void listcust(){
        int j=0;
        for(;j<i;j++){
            cust[j].displayAccount();
        }
    }


    public static void main(String args[]){
        Account a;
        bkdetails bb =new bkdetails();
        Scanner sc=new Scanner(System.in);
        String acno,cname,acno1;
        double ball;
        int ch;
        while(true){
            System.out.println("1.Add Acount\n2.Deposit\n");
            System.out.println("enter Your choise");
            ch=sc.nextInt();
            switch(ch){
                case 1:
                    acno=sc.nextLine();
                    cname=sc.nextLine();
                    ball=sc.nextDouble();
                    a=new Account(acno,cname,ball);
                    bb.addcust(a);
                    break;
                case 2:
                    acno=sc.nextLine();
                    ball=sc.nextDouble();
                    bb.withdraw(acno, ball);
                    break;
                case 3:
                    acno=sc.nextLine();
                    ball=sc.nextDouble();
                    sc.nextLine();
                    bb.withdraw(acno, ball);
                    break;
                case 4:
                    acno=sc.nextLine();
				    acno1=sc.nextLine();
					ball=sc.nextDouble();
					bb.transfer(acno,acno1,ball);
                    break;
                case 5:
                    acno=sc.nextLine();
                    bb.display(acno);
                    break;
                case 6:
                    bb.listcust();
                    break;
                case 7:
                    System.exit(0);
                    // break;
                default:
                    System.out.println("invalid");
                    break;

            }
        }
    }
}

