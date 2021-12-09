package hw9;

public class Coffee{
	private String name;
	private String state;
	private int amount;
	private double price;
	private double weight;
	private boolean in_can;

	public Coffee(String name,String state, int amount, double price, double weight, boolean in_can) {
		this.name = name;
		this.state = state;
		this.amount = amount;
		this.price = price;
		this.weight = weight;
		this.in_can = in_can;
	}
	public double findPrice() {
		return this.price/this.weight;
	}
	public static Coffee findCofee(Coffee[] list, String state, int amount, double price, double weight, boolean in_can) {
		int n = list.length;
		for (int i = 0; i < n; i++) {
			Coffee cur = list[i];
			if (cur.state == state) {
				if (cur.amount == amount) {
					if (cur.price == price) {
						return cur;
					}
				}
			}
				
		}
		return Coffee("none","none",0,0.0,0.0,false);
	}
}
