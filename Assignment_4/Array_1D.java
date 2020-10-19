package Assignment3;

public class Array_1D {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]=new int[4];
		arr[0]=100;
		arr[1]=50;
		arr[2]=10;
		arr[3]=500;
		
		for(int i=0;i<arr.length-1;i++)
		{
			for(int j=i+1;j<arr.length;j++)
			{
				if(arr[i]>arr[j])
				{
					int t=arr[i];
					arr[i]=arr[j];
					arr[j]=t;
				}
			}
		}
		for(int i=0;i<arr.length;i++)
		{
		System.out.println(arr[i]);
		}
	}

}
