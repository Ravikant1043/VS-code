class parent{
    int a;
    public void displayh(){
        System.out.println("Hello gys");
    }
}
class child1 extends parent
{
    int c1;
    public void displayh(String name){
        System.out.println("I am " + name);
    }
}
// class child2 extends parent
// {
//     int c1;
//     public void display2(){
//         System.out.println("I am child 2");
//     }
// }
class hierarchy {
    public static void main(String args[]){
        child1 c=new child1();
        c.displayh("hello");
        c.displayh();
        parent p=new parent();
        p.displayh();
    }
}
