public class SumOfCompositeNumber {

	public static void main(String[] args) {
	
		//Declare array
		int array[] = new int[5];
		
		//Declare and initialize variables
		int i, sum = 0I;
		
		//Input from user
		System.out.println("Please enter 5 different numbers: ");
		for(i=0; i<5; i++)
		{
			array[i] = Integer.parseInt(args[i]);
		}
		
		//Calculate sum of composite numbers
		for (i=0; i<5; i++)
		{
			if(array[i] > 1)
			{
				int flag = 0;
				for(int j=2; j<array[i]/2; j++)
				{
					if(array[i] % j == 0)
					{
						flag = 1;
						break;
					}
				}
				if(flag == 1)
				{
					sum = sum + array[i];
				}
			}
		}
		
		//Display result
		System.out.println("Sum of composite numbers: " +sum);
	}

}