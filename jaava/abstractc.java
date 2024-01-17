abstract class animal{
    public void m1() {
        System.out.println("I am eating now you betichod bhag yaha se");
    }
    public void m2(){
        System.out.println("hlw guys");
    }
    public void m3(){
        System.out.println("hlw gadho");
    }
    public abstract void m4();
}
class cat extends animal {
    public void m2(){
        System.out.println("Meowwwwwwwwwwwwwww");
    }
    public void m3(){
        System.out.println("chala ja gadhe");
    }
    public void m4(){
        System.out.println("chala ja gadhe laudu");
    }
    // b=new int();
}

class abstractc {
    public static void main(String args[]){
        animal c=new cat();
        c.m1();
        c.m2();
        c.m3();
        c.m4();
    }
}
