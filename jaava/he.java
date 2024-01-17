class he{
    public static void t(double t){

    }
    public static void main(String args[]){
        he tt=new he();
        he.t(7);
        char c[] = {'j', 'a', 'v', 'a'};
        String s1 = new String(c);
        StringBuffer ss=new StringBuffer();
        String s2 = new String(s1);
        s2="ravi";
        // System.out.println(s1);
        // System.out.println(s2);

        System.out.println(s1.concat(s2));
        System.out.println(s1.length());
        System.out.println(s1.charAt(0));
        System.out.println(s1.compareTo(s2));
        System.out.println(s1.endsWith("h"));
        System.out.println(s1.startsWith("hh"));
        // System.out.println("Ravikant sharma is my name\n");
        // System.out.print("My roll.no = 21A91A0537");
    }
}