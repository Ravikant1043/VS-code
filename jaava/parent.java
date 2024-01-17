// import java.util.*;
class pp
{
    int v=8876;
    // System.out.println(v);
    public void display(){
        System.out.println(v);
    }
}
class child extends pp
{
    public void displa(){
        System.out.println(89);
    }
}
class parent {
    public static void main(String arg[]){
        pp p=new pp();
        child c=new child();
        p.display();
        c.displa();
        c.display();
    }    
}
