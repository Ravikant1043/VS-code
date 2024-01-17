interface I1{
    void m1();
    void m2();
}
interface I2{
    void m3();
    void m4();
}
class first implements I1{
    public void m1(){
        System.out.println("Method m1");
    }
    public void m2(){
        System.out.println("Method m2");
    }
}
class inte {
    public static void main(String args[]){
        I1 t=new first();
        t.m1();
        t.m2();
    }
}
