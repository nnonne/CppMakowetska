package cw10;

public class Encyclopedia extends Book{
	private double cost;
	public void Encycloedia(String edition, double cost) {
        this.edition = edition;
        this.cost = cost;
    }

    @Override
    public void getEdition() {
        System.out.println("Edition: " + edition);
    }

    public double getCost() {
        return cost;
    }
}
