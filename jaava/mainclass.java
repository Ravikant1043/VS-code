class animals
{
    public void eat(){
        System.out.println("");
    }
}
class omnivores extends animals{
    public void eat(){
        System.out.println("mai mauka hari hu jo mile kha lunga ");
    }
}
class herbivores extends animals{
    public void eat(){
        System.out.println("i am herbivores and i am pure veg");
    }
}
class carnivores extends animals{
    public void eat(){
        System.out.println("mai ekdum non veg u");
    }
}

class mainclass{
    public static void main(String arg[]){
        herbivores h=new herbivores();
        h.eat();
    }
}