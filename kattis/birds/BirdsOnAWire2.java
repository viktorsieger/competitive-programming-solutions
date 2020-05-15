import java.util.Arrays;

public class BirdsOnAWire2 {
	
	public static void main(String[] args) {
		
		int[] integerArray = new int[3], birdsPosition = null;
		int i = 0, j = 0, maxBirdPlaces = 0;
		
		Kattio io = new Kattio(System.in);
		
		while (io.hasMoreTokens()) {
			
			if (i <= 2) {
				integerArray[i] = io.getInt();
				i++;
			}
			else if (i == 3) {
				birdsPosition = new int[integerArray[2]];
				i++;
			}

			if (birdsPosition != null) {
				birdsPosition[j] = io.getInt();
				j++;
			}
		}
		
		if (birdsPosition != null) {
			
			Arrays.sort(birdsPosition);

			for (int k = 0; k < integerArray[2]; k++) {
				
				if (k == 0) {
					if ((birdsPosition[k] - 6) >= integerArray[1]) {
						maxBirdPlaces = maxBirdPlaces + ((int)((birdsPosition[k] - 6) / integerArray[1]));
					}
				}
				
				if (k == (integerArray[2] - 1)) {
					if (((integerArray[0] - 6) - birdsPosition[k]) >= integerArray[1]) {
						maxBirdPlaces = maxBirdPlaces + ((int)(((integerArray[0] - 6) - birdsPosition[k]) / integerArray[1]));
					}
				}
				
				if (((k > 0) && (k <= (integerArray[2] - 1))) && ((birdsPosition[k] - birdsPosition[k - 1]) >= (integerArray[1] * 2))) {
					maxBirdPlaces = maxBirdPlaces + ((int)(((birdsPosition[k] - birdsPosition[k - 1]) / integerArray[1]) - 1));
				}
			}
		}
		else {
			maxBirdPlaces = ((integerArray[0] - 12) / integerArray[1]) + 1;
		}
		
		io.println(maxBirdPlaces);
		
		io.close();
	}
}