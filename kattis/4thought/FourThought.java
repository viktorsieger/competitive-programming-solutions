public class FourThought {

	public static void main(String[] args) {
		
		int[] integerArray;
		int i = 0, j, k, m, n, value1, value2, value3;
		String linePart1 = new String(), linePart2 = new String(), linePart3 = new String(), finalOutput = new String();
		boolean solutionExists;
		
		Kattio io = new Kattio(System.in);
		
		integerArray = new int[io.getInt()];
		
		while (io.hasMoreTokens()) {
			integerArray[i] = io.getInt();
			i++;
		}
		
		for (j = 0; j < integerArray.length; j++) {
			
			solutionExists = false;
			
			for (k = 0; !solutionExists && (k < 4); k++) {

				if (k == 0) {
					linePart1 = "4 * 4";
					value1 = 16;
				}
				else if (k == 1) {
					linePart1 = "4 / 4";
					value1 = 1;
				}
				else if (k == 2) {
					linePart1 = "4 + 4";
					value1 = 8;
				}
				else {
					linePart1 = "4 - 4";
					value1 = 0;
				}
				
				for (m = 0; !solutionExists && (m < 4); m++) {

					if (m == 0) {
						linePart2 = linePart1.concat(" * 4");
						
						if (k == 2) {
							value2 = value1 + 12;
						}
						else if (k == 3) {
							value2 = value1 - 12;
						}
						else {
							value2 = value1 * 4;
						}
					}
					else if (m == 1) {
						linePart2 = linePart1.concat(" / 4");
						
						if (k == 2) {
							value2 = value1 - 3;
						}
						else if (k == 3) {
							value2 = value1 + 3;
						}
						else {
							if (value1 == 1) {
								value2 = 0;
							}
							else {
								value2 = value1 / 4;
							}
						}
					}
					else if (m == 2) {
						linePart2 = linePart1.concat(" + 4");
						value2 = value1 + 4;
					}
					else {
						linePart2 = linePart1.concat(" - 4");
						value2 = value1 - 4;
					}
					
					for (n = 0; !solutionExists && (n < 4); n++) {
						
						if (n == 0) {
							linePart3 = linePart2.concat(" * 4");
							
							if (m == 2) {
								value3 = value2 + 12;
							}
							else if (m == 3) {
								value3 = value2 - 12;
							}
							else {
								if ((k == 2) || (k == 3)) {
									value3 = ((value2 - 4) * 4) + 4;
								}
								else {
									value3 = value2 * 4;
								}
							}
						}
						else if (n == 1) {
							linePart3 = linePart2.concat(" / 4");
							
							if (m == 2) {
								value3 = value2 - 3;
							}
							else if (m == 3) {
								value3 = value2 + 3;	
							}
							else {
								if ((k == 2) || (k == 3)) {
									value3 = ((value2 - 4) / 4) + 4;
								}
								else {
									value3 = value2 / 4;
								}
							}
						}
						else if (n == 2) {
							linePart3 = linePart2.concat(" + 4");
							value3 = value2 + 4;
						}
						else {
							linePart3 = linePart2.concat(" - 4");
							value3 = value2 - 4;
						}
						
						if (integerArray[j] == value3) {
							solutionExists = true;
							finalOutput = linePart3 + " = " + value3;
						}
					}
				}
			}
			
			if (solutionExists) {
				System.out.println(finalOutput);
			}
			else {
				System.out.println("no solution");
			}
		}
		
		io.close();
	}
}