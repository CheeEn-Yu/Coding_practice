#include <stdio.h>
long long px[65536], py[65536], pn;
int has(int x, int y){
    for (int i = 0; i < pn; i++)
        if (px[i] == x && py[i] == y)
            return 1;
    return 0;
}
typedef struct{
    long long x;
    long long y;
    int r;
} Circle;
int in_circle(Circle *c, int x, int y){
    int dis = (x - c->x) * (x - c->x) + (y - c->y) * (y - c->y);
    if (dis - c->r > 0)
        return 0;
    return 1;
}

int main(){
    int i, x, y;
    int count[3] = {0};
    Circle c[3];
    for (i = 0; i < 3; i++)
        scanf("%lld%lld%d", &c[i].x, &c[i].y, &c[i].r);

    pn = 0;
    int ans = 0;
    for (i = 0; i < 3; i++){
        for (x = c[i].x - c[i].r; x <= c[i].x + c[i].r ; x++){
            for (y = c[i].y - c[i].r; y <= c[i].y + c[i].r ; y++){
                if (!has(x,y)){
                    px[pn] = x, py[pn] = y, pn++;
                    int in = 0;
                    for (int j = 0; j < 3; j++){
                        in += in_circle(&c[i], c[i].x, c[i],y);
                        ans += in&1;
                    }
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}