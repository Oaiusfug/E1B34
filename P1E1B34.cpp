// =============================================
// ß@∑~ 1
// ØZØ≈°GE1B
// Æy∏π°G34
// ©m¶W°G©P”Tºyëc
// =============================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// ≈„•‹¶€©wµe≠±°]¶‹§÷20¶Ê°^ 
void drawWelcomeScreen() {
    for (int i = 1; i <= 20; i++) {
        printf("≥o¨OßA™∫µe≠±≤ƒ%d¶Ê°A≈w™Ô®œ•Œ\n", i);
    }
    system("PAUSE");  // ï∫º»∞±µe≠± 
    system("CLS");    // «ÂÆ¯∞£µe≠± 
}

// ±KΩX¿À¨d°]•øΩT¨∞2024°^ 
int passwordCheck() {
    char input[10];
    const char password[] = "2024";

    printf("Ω–øÈ§J4¶Ïº∆±KΩX");
    scanf("%s", input);
    fflush(stdin);  // «Â≤M™≈ΩwΩƒ∞œÖ^

    if (strcmp(input, password) == 0) {
        printf("±KΩX•øΩT\n");
        return 1;
    } else {
        printf("%c", '\a');  // µo•Xƒµßi¡n 
        printf("±KΩXø˘ª~\n");
        return 0;
    }
}

// ≈„•‹øÔ≥Ê 
void displayMainMenu() {
    char ch;
    printf("Ω–øÈ§J§@≠”¶r§∏");
    scanf(" %c", &ch);
    fflush(stdin);

    if (isupper(ch)) {
        printf("Uppercase\n");
    } else if (islower(ch)) {
        printf("Lowercase\n");
    } else if (isdigit(ch)) {
        printf("Digit\n");
    } else {
        printf("Your name:©P”Tºy\n");
    }

    system("PAUSE");
    system("CLS");
}

// ¶A¶∏øÈ§J§@¶r§∏ 
void characterCategory() {
    char ch;
    printf("Ω–¶AøÈ§J§@≠”¶r§∏");
    scanf(" %c", &ch);
    fflush(stdin);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("ØZØ≈°GE1B34 Æy∏π°G34 ©m¶W°G©P”Tºy\n");
    }

    system("PAUSE");
}

// •Dµ{¶° 
int main() {
    
    drawWelcomeScreen();

    if (!passwordCheck()) {
        return 0;
    }

    displayMainMenu();
    characterCategory();

    return 0;
}

