int 车辆(char* data, int wzid1) {
    switch (wzid1) {
        case 16543837:
            strcpy(data, "<电> 双人车");
            return 1;
        case 16543843:
            strcpy(data, "船");
            return 1;
        case 16543883:
            strcpy(data, "<油> 蹦蹦车");
            return 1;
        case 16543889:
            strcpy(data, "<油> 哈罗摩托");
            return 1;
        case 16543896:
            strcpy(data, "<油> 蓝色轿车");
            return 1;
        case 16543905:
            strcpy(data, "<油> 白色轿车");
            return 1;
        case 16543914:
            strcpy(data, "<电> 蓝沃尔特");
            return 1;
        case 16543923:
            strcpy(data, "<电> 灰沃尔特");
            return 1;
        case 16543933:
            strcpy(data, "<电> 五菱宏光");
            return 1;
        case 16543941:
            strcpy(data, "<电> 蹦蹦");
            return 1;
        case 16543947:
            strcpy(data, "<电> 赛摩");
            return 1;
        case 16543955:
            strcpy(data, "<油> 超跑");
            return 1;
        case 16543995:
            strcpy(data, "<油> 敞篷超跑");
            return 1;
        case 16544004:
            strcpy(data, "<油> 摩托");
            return 1;
        case 16544012:
            strcpy(data, "滑翔机");
            return 1;
        case 16544021:
            strcpy(data, "<电> 超级跑车");
            return 1;
        case 16544027:
            strcpy(data, "<油> 皮卡车");
            return 1;
        case 16544116:
            strcpy(data, "<油> 吉普");
            return 1;
        case 16544121:
            strcpy(data, "<油> 吉普");
            return 1;
        case 16544129:
            strcpy(data, "<油> 敞篷吉普");
            return 1;
        case 16544137:
            strcpy(data, "<电> 公务车");
            return 1;
        case 16544143:
            strcpy(data, "<油> 敞篷越野");
            return 1;
        case 16544149:
            strcpy(data, "<油> 越野");
            return 1;
        case 16840637:
            strcpy(data, "<电> 双人车");
            return 1;
        case 16840752:
            strcpy(data, "船");
            return 1;
        case 16840817:
            strcpy(data, "<油> 蹦蹦车");
            return 1;
        case 16841044:
            strcpy(data, "<电> 五菱宏光");
            return 1;
        case 16841166:
            strcpy(data, "<电> 蹦蹦");
            return 1;
        case 16841250:
            strcpy(data, "<电> 赛摩");
            return 1;
        case 16841387:
            strcpy(data, "<油> 超跑");
            return 1;
        case 16841508:
            strcpy(data, "<油> 摩托");
            return 1;
        case 16841696:
            strcpy(data, "滑翔机");
            return 1;
        case 16841933:
            strcpy(data, "<油> 皮卡车");
            return 1;
        case 16842043:
            strcpy(data, "<油> 吉普");
            return 1;
        case 16842263:
            strcpy(data, "<电> 公务车");
            return 1;
        case 16842468:
            strcpy(data, "<油> 敞篷越野");
            return 1;
        case 16842566:
            strcpy(data, "<油> 哈罗摩托");
            return 1;
        default:
            return 0;
    }
}

int 其他(char* data, int wzid1) {
    switch (wzid1) {
        case 16539853:
            strcpy(data, "超级空投");
            return 10;
        case 16539839: //14988676
            strcpy(data, "空投");
            return 11;
        case 16539830: //14988676
            strcpy(data, "空投");
            return 11;
        case 16539954: //14988676
            strcpy(data, "空投");
            return 11;
        case 16540020: //14988676
            strcpy(data, "空投");
            return 11;
        case 18740931: //14988676
            strcpy(data, "空投");
            return 11;
        case 16540751:
            strcpy(data, "骨灰盒");
            return 12;
        case 18805946:
            strcpy(data, "骨灰盒");
            return 12;
        case 19820221:
            strcpy(data, "骨灰盒");
            return 12;
            ////十字弩ID 52585

        case 16545272:
            strcpy(data, "注意手雷!!!");
            return 20;
        case 16545262:
            strcpy(data, "注意毒气手雷!!!");
            return 21;
        case 16545241:
            strcpy(data, "注意篮圈手雷!!!");
            return 22;
        case 16545280:
            strcpy(data, "注意燃烧瓶!!!");
            return 23;
            //   case 14991773:
            //       strcpy(data, "警告榴弹来袭");
            //        return 3;
        case 16545253:
            strcpy(data, "注意震爆弹!!!");
            return 2;
        default:
            return 0;
    }
}

