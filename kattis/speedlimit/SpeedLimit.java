public class SpeedLimit {

	public static void main(String[] args) {
		
		int[] integerArray;
		int pairs, i, distanceDriven;
		
		Kattio io = new Kattio(System.in);
		
		do {
			pairs = io.getInt();
			
			if (pairs != -1) {
				
				distanceDriven = 0;
				integerArray = new int[pairs * 2];
				
				for (i = 0; i < (pairs * 2); i++) {
					integerArray[i] = io.getInt();
				}
				
				for (i = 0; i < (pairs * 2); i += 2) {
					
					if (i == 0) {
						distanceDriven = distanceDriven + (integerArray[i] * integerArray[i + 1]);
					}
					else {
						distanceDriven = distanceDriven + (integerArray[i] * (integerArray[i + 1] - integerArray[i - 1]));
					}
				}
				
				io.println(distanceDriven + " miles");
			}
		} while (pairs != -1);
		
		io.close();
	}
}