#include <stdio.h>
long long px[65536], py[65536], pn;
int has(int x, int y){
    for (int i = 0; i < pn; i++)
        if (px[i] == x && py[i] == y)
            return 1;
    return 0;
}
typedef struct
{
    long long x;
    long long y;
    int r;
} Circle;
int in_circle(Circle *c, int x, int y)
{
    if ((x - c->x) * (x - c->x) + (y - c->y) * (y - c->y) > (c->r)*(c->r))
        return 0;
    return 1;
}
int main()
{
    int num_input;
    scanf("%d", &num_input);
    for (int i = 0; i < num_input; i++)
    {
        Circle c[3];
        for (int j = 0; j < 3; j++)
            scanf("%lld%lld%d", &c[j].x, &c[j].y, &c[j].r);

        pn = 0;
        int ans = 0;
        for (int j = 0; j < 3; j++)
        {
            for (long long x = c[j].x - c[j].r; x <= c[j].x + c[j].r ; x++)
            {
                for (long long y = c[j].y - c[j].r; y <= c[j].y + c[j].r ; y++)
                {
                    if (!has(x, y))
                    {
                        px[pn] = x, py[pn] = y, pn++;
                        int in = 0;
                        for (int k = 0; k < 3; k++)
                            in += in_circle(&c[k], x, y);
                        ans += in&1;
                    }
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}