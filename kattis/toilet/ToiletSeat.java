public class ToiletSeat {

	public static void main(String[] args) {
		
		String input;
		int i, aPolicy1 = 0, aPolicy2 = 0, aPolicy3 = 0;
		
		Kattio io = new Kattio(System.in);
		
		input = io.getWord();
		
		for (i = 1; i < input.length(); i++) {
			if ((input.charAt(i - 1) == 'U') && (input.charAt(i) == 'U')) {
				if (i == 1) {
					aPolicy2++;
				}
				else {
					aPolicy2 = aPolicy2 + 2;
				}
			}
			else if ((input.charAt(i - 1) == 'D') && (input.charAt(i) == 'D')) {
				if (i == 1) {
					aPolicy1++;
				}
				else {
					aPolicy1 = aPolicy1 + 2;
				}
			}
			else if ((input.charAt(i - 1) == 'U') && (input.charAt(i) == 'D')) {
				if (i == 1) {
					aPolicy2++;
				}
				aPolicy1 = aPolicy1 + 2;
			}
			else if ((input.charAt(i - 1) == 'D') && (input.charAt(i) == 'U')) {
				if (i == 1) {
					aPolicy1++;
				}
				aPolicy2 = aPolicy2 + 2;
			}
			
			if (input.charAt(i) != input.charAt(i - 1)) {
				aPolicy3++;
			}
		}
		
		io.println(aPolicy1);
		io.println(aPolicy2);
		io.println(aPolicy3);
		
		io.close();
	}
}