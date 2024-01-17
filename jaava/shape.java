import java.util.*;
abstract class uinversalshape{
    Scanner sc =new Scanner(System.in);
    int a,b;
    float area;
    final float pi=3.142f;
    public abstract void get_input();
    public abstract void cal_area();
    public void show_area(){
        System.out.println("Area = "+area);
    }
}
class rectangle extends uinversalshape{
    public void get_input(){
        System.out.println("Enter the length and the breadth");
        a=sc.nextInt();
        b=sc.nextInt();
    }    
    public void cal_area(){
        area =a*b;
    }
}
class triangle extends uinversalshape{
    public void get_input(){
        System.out.println("Enter the base and the height of the triangle");
        a=sc.nextInt();
        b=sc.nextInt();
    }
    public void cal_area(){
        area=(a*b)/2;
    }
}
class circle extends uinversalshape{
    public void get_input(){
        System.out.println("Enter the radious of the circle");
        a=sc.nextInt();

    }
    public void cal_area(){
        area=a*a*pi;
    }
}
class shape {
    public static void main(String args[]){
        uinversalshape s;
        s=new rectangle();
        s.get_input();
        s.cal_area();
        s.show_area();

        s=new circle();
        s.get_input();
        s.cal_area();
        s.show_area();

        s=new triangle();
        s.get_input();
        s.cal_area();
        s.show_area();
    }
}
