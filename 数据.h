//
// Created by XUEJIAN on 2023/4/30.
//


//#define 红牛T0_数据_H
struct {
    //世界
    long long GameresolutionX = 0x1CCE8;  //X
    long long GameresolutionY = 0x1CD00;  //Y
    long long Gname = 0x7EED0;  //Gname
    long long Matrix = 0X2EB990;  //矩阵
    long long Gworld = 0x7BF30;  //世界
    int Ulevel = 0x50;
    int array = 0x120;
    int Gcount = array + 0x8;
    long long regularid = 0xBA18C40; //固定ID偏移
    int regular_1 = 0x1B8;
    int Gangle = 0x256C;       //人物旋转
    long long selfmigration = 0x2EBA30;  //自己地址
    long long Gundeflection = 0x2EB720;  //枪械地址

    //物资
    int ItemID = 0x14;       //车辆id
    int WtemID = 0x2F4;  //物资ID
    int Wcount = 0x2F0;  //物资数量
    //人物
    int Team = 0X14A8;  //队伍
    int Health = 0xF14; //血量
    int HealthMax = 0x15E8; //最大血量
    int Name = 0xA28;  //名字
    int gesture = 0x3D0; //姿势
    //判断
    int pd = 0x15E8;  //float
    int pd1 = 0X1F28;   //dword
    int zpd = 0xF8;  //Zfloat
    int zpd1 = 0x14C;   //Zdword
    //坐标
    int CoordPtr = 0x170;  //坐标一层
    int Coord = 0x1F0;   //坐标二层
    int Tips = 0x1354;   //偏航角
    //骨骼
    int Meshlv = 0x218;  //骨骼一层,
    int Human = 0x1F0 - 0X10;   //骨骼阵列
    int Bone1st = 0x5C8; //骨骼入口
    int Bone2st = 0x5D8; //骨骼入口
    int Bone3st = 0xFF0; //骨骼入口
    //倒地
    int daodi = 0X1C88;  //到地  y
    int Watch = 0x1B88;  //观战   y
    //开火
    int EspSight = 0x16E8;  //开镜
    int EspFire = 0XDF0;   //开火
    //
    int levelWeapon = 0x158; //武器入口  y
    int isHd = 0xB4;  //手持验证  y
    int WeaponID = 0x2C8;    //武器ID入口  y
    int WeaponID_1 = 0x188;  //武器ID  y
    int bullet = 0x760;      //武器子弹   y
    int bulletMax = 0x948;   //武器子弹Max  y
    int Grenadeexplosion = 0x778;   ////获取手雷引信
    /////////////自瞄数据/////////
    int Weaponspeedoffset = 0x940;      // 武器速度入口  y
    int Weaponspeedoffset_1 = 0x68;   //  子弹速度入口1  y
    int Bulletvelocity = 0x24;         //  子弹速度 1  y
    int Bulletvelocity1 = 0x60;       //  子弹速度 2   y

    int vector = 0x11C;                 //  人物运动 y

    int Svector = 0x3D8;                 //  人物运动 y
    int Svector_1 = 0x164;                 //  人物运动 y

    int carvector = 0x88;             //  车辆运动  y
    int carpd = 0xF0;                  // 车上判断  y

    long long Onthecar = 0xBC5EC60;    //  车上准心偏移\

    int core = 0x110;            //人物准心入口  y
    int core_1 = 0x2B8;         // 人物准心   y
    int carcore = 0x158;          //车上准心
    int carcore_1 = 0x28BC;      //车上准心1

    /////////
} sj;
