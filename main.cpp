#include "animal.h"
#define num_animal 4
#define action 4
int flag = 0;
int main(void)
{
    string a[num_animal][action] = {{"狗", "汪汪叫", "啃骨头", "地上跑"},
                      {"猫", "喵喵叫", "吃鱼", "地上走"},
                      {"鸟", "叽叽喳喳", "吃虫子", "天上飞"},
                      {"鱼", "无声音", "吃浮游生物", "水里游"}};
    int b[4]{10, 20, 30, 40};
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            if (flag == 0)
            {
                Aniaml_action p1(a[i][0], a[i][1], a[i][2], a[i][3], b[j]);
                p1.show();
                flag=1;
            }
        }
        flag=0;

    }
    return 0;
}
