package cw9;

public class Bouquet {
	    Flower[] flowers;

	    public Bouquet(Flower[] flowers) {
	        this.flowers = flowers;
	    }

	    public double getPrice(){
	        double suma = 0.0;
	        for (Flower f: flowers
	             ) {
	            suma += f.getPrice();
	        }
	        return suma;
	    }

	    public Flower getFlowerByLenght(int lower, int higher){
	        for (Flower f: flowers
	             ) {
	            if(lower < f.getLenghtOfFlower() && f.getLenghtOfFlower() < higher)
	                return f;
	        }
	        return new Flower();
	    }
}
