/*
> Initialize array_with_elements with some example values.
> Calculate number_of_elements as the size of array_with_elements divided by the size of one element.
> Initialize maximum_element with the first value in array_with_elements.
> For each index from 1 to number_of_elements - 1:
> If array_with_elements[index] is greater than maximum_element:
> Update maximum_element to array_with_elements[index].
> Print maximum_element
*/


#include <stdio.h>

int main() {
    // Initialize the array with some example values
    int array_with_elements[] = {10, 200, 4, 45, 99};
    int number_of_elements = sizeof(array_with_elements) / sizeof(array_with_elements[0]);
    
    // Initialize max with the first element of the array
    int maximum_element = array_with_elements[0];
    
    // Loop through the array starting from the second element
    for (int index = 1; index < number_of_elements; index++) {
        // Compare current element with maximum_element
        if (array_with_elements[index] > maximum_element) {
            // Update maximum_element if current element is greater
            maximum_element = array_with_elements[index];
        }
    }
    
    // Print the maximum element
    printf("The maximum element in the array is %d\n", maximum_element);
    
    return 0;
}
