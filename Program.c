#include <stdio.h>
#include <string.h>

// FUNCTION TO DISPLAY PLANET INFORMATION
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

int main()
{
    char planetName[100];

    // PRINTING GREETING AND INSTRUCTION TO USER
    printf("Welcome to the Solar System Explorer!\n");
    printf("To explore more about a planet, type its name and press Enter. To exit the program, type 'exit' and press Enter.\n");

    while (1)
    {
        // TAKING USER INPUT FOR PLANET NAME
        fgets(planetName, sizeof(planetName), stdin);
        planetName[strcspn(planetName, "\n")] = 0; // REMOVE NEWLINE CHARACTER FROM INPUT

        // CHECK IF USER WANTS TO EXIT
        if (strcmp(planetName, "exit") == 0)
        {
            printf("Exiting program\n"); // EXIT MESSAGE
            break;                       // EXIT THE LOOP AND PROGRAM
        }

        // DISPLAY PLANET INFORMATION BASED ON USER INPUT
        if (strcmp(planetName, "mercury") == 0)
        {
            displayPlanetInfo("Mercury",
                              "Mercury is a small, rocky planet closest to the Sun. It has extreme temperature variations, ranging from extremely hot to extremely cold.",
                              "88 Earth days", "58.6 million km",
                              "No known signs of life. Harsh conditions due to proximity to the Sun.",
                              "0.38 times the size of Earth",
                              "Humans have not visited Mercury due to its proximity to the Sun and extreme temperature variations.");
        }
        else if (strcmp(planetName, "venus") == 0)
        {
            displayPlanetInfo("Venus",
                              "Venus is known for its thick, toxic atmosphere composed mainly of carbon dioxide. It experiences a runaway greenhouse effect, making it the hottest planet in the solar system.",
                              "225 Earth days", "108.2 million km",
                              "No signs of life. Extreme heat and atmospheric pressure make it inhospitable.",
                              "0.95 times the size of Earth",
                              "Humans have not landed on Venus due to its harsh atmosphere, extreme heat, and high atmospheric pressure.");
        }
        else if (strcmp(planetName, "earth") == 0)
        {
            displayPlanetInfo("Earth (Tellus)",
                              "Earth is the only known planet with life. It has a diverse environment, including oceans, continents, and a variety of ecosystems.",
                              "365.25 days", "149.6 million km",
                              "Abundant signs of life, including a wide range of species.",
                              "The size of Earth is 1 (itself).",
                              "Humans naturally inhabit Earth.");
        }
        else if (strcmp(planetName, "mars") == 0)
        {
            displayPlanetInfo("Mars",
                              "Mars is a red planet with a dusty, rocky surface. It has polar ice caps and evidence suggesting the presence of liquid water in the past.",
                              "687 Earth days", "227.9 million km",
                              "No confirmed signs of current life. Some evidence indicates the possibility of past microbial life.",
                              "0.53 times the size of Earth",
                              "Humans have sent robotic missions to Mars. Potential for future human exploration due to past water evidence, but challenges include harsh conditions and radiation exposure.");
        }
        else if (strcmp(planetName, "jupiter") == 0)
        {
            displayPlanetInfo("Jupiter",
                              "Jupiter is the largest planet in the solar system and consists mostly of hydrogen and helium. It has a turbulent atmosphere with prominent bands and storms.",
                              "11.9 Earth years", "778.6 million km",
                              "No known signs of life. Harsh conditions due to its gas giant composition.",
                              "11.2 times the size of Earth",
                              "No human exploration possible due to its gas giant composition, extreme atmospheric pressure, and lack of a solid surface.");
        }
        else if (strcmp(planetName, "saturn") == 0)
        {
            displayPlanetInfo("Saturn",
                              "Saturn is known for its beautiful rings made of ice and dust particles. It has a similar composition to Jupiter and has multiple moons.",
                              "29.5 Earth years", "1.4 billion km",
                              "No known signs of life. Harsh conditions on gas giants like Saturn.",
                              "9.45 times the size of Earth",
                              "No human exploration possible due to its gas giant composition, lack of a solid surface, and extreme atmospheric conditions.");
        }
        else if (strcmp(planetName, "uranus") == 0)
        {
            displayPlanetInfo("Uranus",
                              "Uranus is tilted on its side and has a unique magnetic field. It is an ice giant with a composition of hydrogen, helium, and methane.",
                              "84 Earth years", "2.9 billion km",
                              "No confirmed signs of life. Extremely cold and harsh conditions on ice giants.",
                              "4.01 times the size of Earth",
                              "No human exploration possible due to its extreme cold, lack of solid surface, and distant location.");
        }
        else if (strcmp(planetName, "neptune") == 0)
        {
            displayPlanetInfo("Neptune",
                              "Neptune is a blue, icy giant with strong winds and a dynamic atmosphere. It has dark spots resembling storms.",
                              "164.8 Earth years", "4.5 billion km",
                              "No known signs of life. Harsh conditions on ice giants like Neptune.",
                              "3.88 times the size of Earth",
                              "No human exploration possible due to its extreme cold, lack of solid surface, and distant location.");
        }
        else if (strcmp(planetName, "pluto") == 0)
        {
            displayPlanetInfo("Pluto",
                              "Pluto is a dwarf planet located in the Kuiper Belt. It is mostly composed of rock and ice.",
                              "248 Earth years", "5.9 billion km",
                              "No confirmed signs of life. Remote and cold environment in the Kuiper Belt.",
                              "0.18 times the size of Earth",
                              "No human exploration possible due to its extreme distance, harsh surface temperatures averaging -229°C (-380°F), and current technological limitations.");
        }
        else
        {
            // PLANET NOT FOUND
            printf("Planet not found.\n");
        }

        // ASKING USER FOR ANOTHER PLANET NAME OR TO EXIT
        printf("\nTo explore another planet, type its name and press Enter. To exit the program, type 'exit' and press Enter.\n");
    }

    return 0;
}
