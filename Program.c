#include <stdio.h>
#include <string.h>

// FUNCTION TO DISPLAY PLANET INFORMATION
// Display the details of a planet including its description, orbital period, distance from the sun,
// signs of life, size comparison to Earth, and exploration feasibility.
void displayPlanetInfo(char *name, char *description, char *orbitalPeriod, char *distanceFromSun, char *signsOfLife, char *sizeComparison, char *explorationFeasibility)
{
    // PRINTING PLANET INFORMATION
    printf("Planet: %s\n", name);
    printf("Description: %s\n", description);
    printf("Orbital Period: %s\n", orbitalPeriod);
    printf("Distance from the Sun: %s\n", distanceFromSun);
    printf("Signs of Life: %s\n", signsOfLife);
    printf("Size Comparison to Earth: %s\n", sizeComparison);
    printf("Exploration Feasibility: %s\n", explorationFeasibility);
}
