interface Animal{
    void eat();
    void sound();
    void run();
}
class tiger implements Animal{
    public void eat(){
        System.out.println("I am eating");
    }
    public void sound(){
        System.out.println("Roaring");
    }
    public void run(){
        System.out.println("Sprinting");
    }
}
class inter {
    public static void main(String args[]){
        Animal a;
        a=new tiger();
        a.eat();
        a.run();
        a.sound();
    }
}
