// import java.util.*;
class gp
{
    int a;
    public void displayX(){
        System.out.println("hello gp");
    }
}
class parent extends gp
{
    int p;
    public void displayY(){
        System.out.println("I am hello hello");
    }
}
class child extends parent
{
    int c;
    public void displayZ(){
        System.out.println("Hi everyone");
    }
}
class multilevel {
    public static void main(String ar[]){
        // gp g=new gp();
        // parent p=new parent();
        child c=new child();
        c.displayX();
        c.displayY();
        c.displayZ();
        // close(g);
    }
}