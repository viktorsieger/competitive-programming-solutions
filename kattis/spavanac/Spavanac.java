public class Spavanac {

	public static void main(String[] args) {
		
		int hour, minute;

		Kattio io = new Kattio(System.in);

		hour = io.getInt();
		minute = io.getInt();
		
		if (minute < 45) {
			hour -= 1;
			minute += 15;
			
			if (hour < 0) {
				hour = 23;
			}
		}
		else {
			minute -= 45;
		}
		
		io.println(hour + " " + minute);
		
		io.close();
	}
}