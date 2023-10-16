#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define the Position struct
struct Position {
    float x;
    float y;
};

// Function to calculate the distance between two positions
float distance(struct Position p1, struct Position p2) {
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;

    return sqrt(dx * dx + dy * dy);
}

// Function to retrieve positions close to a given position
struct Position* closest_positions(struct Position* positions, int array_size, struct Position query, float maximum_distance, int* result_size) {
    // Allocate memory for the result array
    struct Position* result = (struct Position*)malloc(array_size * sizeof(struct Position));
    
    // Initialize the result size
    *result_size = 0;

    // Iterate through positions
    for (int i = 0; i < array_size; ++i) {
        // Calculate the distance between the current position and the query position
        float dist = distance(positions[i], query);

        // Check if the distance is below or equal to the maximum distance
        if (dist <= maximum_distance) {
            // Add the position to the result array
            result[*result_size] = positions[i];
            (*result_size)++;
        }
    }

    return result;
}

int main() {
    // Create an array of positions
    struct Position positions[] = {
        {1.0, 2.0},
        {4.0, 6.0},
        {2.0, 3.0},
        {7.0, 8.0},
        {5.0, 5.0}
    };

    int array_size = sizeof(positions) / sizeof(positions[0]);

    // Query position
    struct Position query = {3.0, 4.0};

    // Maximum distance
    float max_distance = 3.0;

    // Call the closest_positions function
    int result_size;
    struct Position* result = closest_positions(positions, array_size, query, max_distance, &result_size);

    // Display the result
    printf("Positions close to the query position:\n");
    for (int i = 0; i < result_size; ++i) {
        printf("(%f, %f)\n", result[i].x, result[i].y);
    }

    // Free the allocated memory
    free(result);

    return 0;
}
