#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

float distancia(struct point p1, struct point p2) {
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

int main() {
    int C;
    scanf("%d", &C);

    while (C--) {
        int N;
        scanf("%d", &N);

        struct point bola, bolas[51];

        scanf("%d %d", &bola.x, &bola.y);

        float min = 1000000.0;
        int position = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d %d", &bolas[i].x, &bolas[i].y);

            float distance = distancia(bola, bolas[i]);
          
            if (distance < min) {
                min = distance;
                position = i+1;
            }
        }

        printf("%d\n", position);
    }

    return 0;
}
