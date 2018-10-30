#include <stdio.h>
#include <stdint.h>

void printBinary(const uint8_t data)
{
    char string[10];
    string[8] = '\n';
    string[9] = '\0';
    for (int i = 0; i < 8; ++i)
    {
        if (data & 1 << i) {
            string[i] = '1';
        } else {
            string[i] = '0';
        }
    }
    puts(string);
}


// void inline waitForLeftMouseButton()
// {
    // volatile uint16_t* input = *(uint16_t*)0xbfe001;
    // while (*(volatile uint16_t*)0xbfe001 & (1 << 6));
    // while (BTST(*(volatile uint16_t*)0xbfe001, 6))
// }


void waitForLeftMouseButton() = 
    "lmb:\n"
    "\tbtst.b #6,$bfe001 \n"
	"\tbne lmb \n"
    "";

void sleep(uint32_t cycles)
{
    volatile uint32_t down = cycles;
    while (down) --down;
}

int main(int argc, char* argv[])
{
    // sleep(1000000);
    printf("Puzzle Game...\n");

    FILE* fp = fopen("lala.txt", "rb");
    if (fp)
    {
        printf("File opened!\n");
    }
    fclose(fp);

    uint8_t input;
    do {
        input = *(volatile uint8_t*)0xbfe001;

        printBinary(input);
        puts("012345678901234567890\n");
        sleep(100000);
    } while (input & (1 << 6));

    // waitForLeftMouseButton();

    return 0;
}
