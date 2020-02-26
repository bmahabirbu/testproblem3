//Brian Mahabir U08039190
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

void zigzagSort(vector<int> &nums) {

	int size = nums.size();
	int temp;
	
	for (int i = 0; i < size; i++) //runs for 
	{
		if(i%2 == 0 && i+1 < size) //checks whether the iterator even
		{
			if(nums[i] >= nums[i+1]) //checks to see if element i and i+1 are greater than if so then swap
			{
				iter_swap(nums.begin() + i, nums.begin() + i + 1); 
			}


		}

		if(i%2 == 1 && i+1 < size)//checks if iterator is odd
		{

			if (nums[i] <= nums[i+1])//checks if element i and element i +1 is less than if so then swap
			{
				iter_swap(nums.begin() + i, nums.begin() + i + 1);
			}
		}
	}
	
}



//int main ()
//{
//	vector<int> k = {3, 1, 4, 5, 3, 7, 2};
//	zigzagSort(k);
//	for(int i = 0; i < k.size(); i++)
//	{
//		cout << ' ' << k[i];
//	}
//}
