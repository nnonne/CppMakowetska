package hw9;

public class Piano {
	Button [] buttons;
	Pedal [] pedals;
	public Piano(Button [] buttons, Pedal [] pedals) {
		this.buttons = buttons;
		this.pedals = pedals;
	}
	public void play() {
		int n = this.buttons.length;
		for (int i = 0; i < n; i++) {
			this.buttons[i].pressButton();
		}
		int m = this.pedals.length;
		for (int i = 0; i < m; i++) {
			this.pedals[i].pressPedal();
		}
	}
}
