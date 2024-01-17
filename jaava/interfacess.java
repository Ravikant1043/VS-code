interface it{
    int fact(int n);
}
class tt implements it{
    public int fact(int n){
        if(n<=1)return 1;
        return n*fact(n-1);
    }
}
class interfacess {
    public static void main(String []args){
        tt t=new tt();
        System.out.println(t.fact(5));
    }
}