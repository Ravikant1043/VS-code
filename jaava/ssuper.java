class hellogadho{
    int a=1920;

    hellogadho(){
        // this("hlw guys");
        System.out.println("hellogadho's constructor");
    }
    hellogadho(String s){
        System.out.println(s);
    }

    public void show(){
        System.out.print("hello guys \nTo kaise h aap log");
    }
}
class hellotatti extends hellogadho{
    int a=578;
    hellotatti(){
        System.out.println("This is hellotatti's constructor");
    }

    public void show(){
        super.show();
        System.out.println("hellogadho :"+super.a);
        System.out.println("hellotatti :"+a);
        System.out.println();
    }
}
class ssuper {
    public static void main(String arg[]){
        // hellogadho h=new hellogadho();
        // System.out.println();
        hellotatti hh=new hellotatti();
        hh.show();
    }    
}
