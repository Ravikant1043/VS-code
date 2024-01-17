import java.util.*;
class calculator {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int x,y,z;
        while(true){
            System.out.println("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulous\n6.exit");
            System.out.println("Enter your Choice");
            x=sc.nextInt();
            // y=sc.nextInt();
            // z=sc.nextInt();
            switch(x){
                case 1:
                    y=sc.nextInt();
                    z=sc.nextInt();
                    z+=y;
                    System.out.println("Sum="+z);
                    break;
                case 2:
                    y=sc.nextInt();
                    z=sc.nextInt();
                    y-=z;
                    System.out.println("Difference="+z);
                    break;
                case 3:
                    y=sc.nextInt();
                    z=sc.nextInt();
                    y*=z;
                    System.out.println("MUl="+z);
                    break;
                case 4:
                    y=sc.nextInt();
                    z=sc.nextInt();
                    // y=z;
                    System.out.println("Division="+y/z);
                    break;
                case 5:
                    y=sc.nextInt();
                    z=sc.nextInt();
                    // y-=z;
                    System.out.println("Modulus="+y%z);
                    break;
                case 6:
                    System.out.println("Nikal laude kya dekh rha h tereko h bol rha hu bsdk");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid Choice");
            }
        }
        // sc.close();
    }  
      
}
