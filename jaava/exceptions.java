import java.util.*;
class exceptions {
    public static void checkValidity(String user,String pwd){
        if(user.equalsIgnoreCase("aditya") && pwd.equalsIgnoreCase("Ravi"))
            System.out.println("Success");
        // else System.out.println("invalid details");
        else {
            try{
                throw new InvalidLoginDetailsException("Make sure give the Correct Details");
            }
            catch(InvalidLoginDetailsException i){
                System.out.println("Handeled the Exception in Check Validity method");
                throw i;
            }
        }
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String username=sc.nextLine();
        String pwd =sc.nextLine();

        try{
            checkValidity(username,pwd);
        }
        catch(InvalidLogicalDetailsException ie){
            System.out.println(ie);
        }
        catch(Exception e){
            System.out.println(e);
        }
        finally{
            sc.close();
        }
    }


    
}
