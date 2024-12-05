// Kadane's Algorithm Max and Min
#include <iostream>
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int current_sum = 0;
    int max_sum = arr[0];
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size_arr; i++)
    {
        current_sum = std::max(arr[i], current_sum + arr[i]);
        max_sum = std::max(max_sum, current_sum);

    }
            std::cout << "La suma máxima es: " << max_sum << std::endl;

    for (int i = 0; i < size_arr; i++)
    {
        current_sum = std::min(arr[i], current_sum + arr[i]);
        max_sum = std::min(max_sum, current_sum);
    }

    std::cout << "La suma mínima es: " << max_sum << std::endl;

    
}