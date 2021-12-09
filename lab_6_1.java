package cw9;

public class lab_6_1 {
    public static void main(){
        Flower f1 = new Flower("Chamomile", 2, 4, 5, 25);
        Flower f2 = new Flower("Rose", 3, 713, 3, 4);
        Flower f3 = new Flower("Violet", 1, 222, 4, 7);
        Flower []flowers = new Flower[]{f1, f2, f3};
        Bouquet bouquet = new Bouquet(flowers);
        System.out.println(bouquet.getPrice());
        System.out.println(bouquet.getFlowerByLenght(4, 7));
    }
}
