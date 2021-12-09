package hw9;

public class Pedal {
	private int len;
	private boolean is_pressed;
	public void pressPedal() {
		this.is_pressed = true;
	}
	public Pedal(int len) {
		this.len = len;
		this.is_pressed = false;
	}
}
