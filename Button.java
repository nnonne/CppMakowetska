package hw9;

public class Button {
	private String color;
	private String sound;
	private boolean is_pressed;
	public Button(String color, String sound) {
		this.color = color;
		this.sound = sound;
		this.is_pressed = false;
	}
	public void pressButton() {
		this.is_pressed = true;
	}
}
