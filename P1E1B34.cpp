// =============================================
// �@�~ 1
// �Z�šGE1B
// �y���G34
// �m�W�G�P�T�y�c
// =============================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// ��ܦ۩w�e���]�ܤ�20��^ 
void drawWelcomeScreen() {
    for (int i = 1; i <= 20; i++) {
        printf("�o�O�A���e����%d��A�w��ϥ�\n", i);
    }
    system("PAUSE");  // ���Ȱ��e�� 
    system("CLS");    // ������e�� 
}

// �K�X�ˬd�]���T��2024�^ 
int passwordCheck() {
    char input[10];
    const char password[] = "2024";

    printf("�п�J4��ƱK�X");
    scanf("%s", input);
    fflush(stdin);  // ��M�Žw�İυ^

    if (strcmp(input, password) == 0) {
        printf("�K�X���T\n");
        return 1;
    } else {
        printf("%c", '\a');  // �o�Xĵ�i�n 
        printf("�K�X���~\n");
        return 0;
    }
}

// ��ܿ�� 
void displayMainMenu() {
    char ch;
    printf("�п�J�@�Ӧr��");
    scanf(" %c", &ch);
    fflush(stdin);

    if (isupper(ch)) {
        printf("Uppercase\n");
    } else if (islower(ch)) {
        printf("Lowercase\n");
    } else if (isdigit(ch)) {
        printf("Digit\n");
    } else {
        printf("Your name:�P�T�y\n");
    }

    system("PAUSE");
    system("CLS");
}

// �A����J�@�r�� 
void characterCategory() {
    char ch;
    printf("�ЦA��J�@�Ӧr��");
    scanf(" %c", &ch);
    fflush(stdin);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("�Z�šGE1B34 �y���G34 �m�W�G�P�T�y\n");
    }

    system("PAUSE");
}

// �D�{�� 
int main() {
    
    drawWelcomeScreen();

    if (!passwordCheck()) {
        return 0;
    }

    displayMainMenu();
    characterCategory();

    return 0;
}

