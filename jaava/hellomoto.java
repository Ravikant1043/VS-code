abstract class vehicle{
    public abstract int get_No_of_wheels();
    public abstract int seating_capacity();
}
class Bike extends vehicle{
    public int get_No_of_wheels(){
        return 2;
    }
    public int seating_capacity(){
        return 3;
    }
}
class Auto extends vehicle{
    public int get_No_of_wheels(){
        return 3;
    }
    public int seating_capacity(){
        return 10;
    }
}
class car extends vehicle{
    public int get_No_of_wheels(){
        return 4;
    }
    public int seating_capacity(){
        return 5;
    }
}
class hellomoto {
    public static void main(String atgs[]){
        vehicle v;
        int w,c;
        v=new Bike();
        System.out.println("=====================================================");
        System.out.println("Bike wa");
        w=v.get_No_of_wheels();
        c=v.seating_capacity();
        System.out.print("No of wheels: "+w);
        System.out.println("No of seating capaity: "+c);
        System.out.println("=====================================================");

        v=new Auto();
        System.out.println("=====================================================");
        System.out.println("Auto wa");
        w=v.get_No_of_wheels();
        c=v.seating_capacity();
        System.out.print("No of wheels: "+w);
        System.out.println("No of seating capaity: "+c);
        System.out.println("=====================================================");


        v=new car();
        System.out.println("=====================================================");
        System.out.println("Car");
        w=v.get_No_of_wheels();
        c=v.seating_capacity();
        System.out.print("No of wheels: "+w);
        System.out.println("No of seating capaity: "+c);
        System.out.println("=====================================================");
    }    
}
