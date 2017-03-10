/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/New_Blank_Circuit/circuit/main_main.vhd";
extern char *IEEE_P_1242562249;
extern char *STD_TEXTIO;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );


static void work_a_1774854872_3212880686_p_0(char *t0)
{
    char t7[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t20 = (25 - 30);
    t12 = (t20 * -1);
    t13 = (1U * t12);
    t21 = (0 + t13);
    t2 = (t3 + t21);
    t1 = *((unsigned char *)t2);
    t8 = (t0 + 2604);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t15 = *((char **)t11);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast(t8);
    t2 = (t0 + 2516);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(66, ng0);
    t8 = (t0 + 1144U);
    t9 = *((char **)t8);
    t8 = (t0 + 4724U);
    t10 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t7, t9, t8, 1);
    t11 = (t7 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t14 = (31U != t13);
    if (t14 == 1)
        goto LAB8;

LAB9:    t15 = (t0 + 2568);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 31U);
    xsi_driver_first_trans_fast(t15);
    goto LAB3;

LAB5:    t2 = (t0 + 660U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_size_not_matching(31U, t13, 0);
    goto LAB9;

}

static void work_a_1774854872_3212880686_p_1(char *t0)
{
    char t27[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    int t24;
    int t25;
    int t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;

LAB0:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2524);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(90, ng0);
    t7 = (t0 + 2220);
    t8 = (t0 + 1620U);
    t9 = (t0 + 1724U);
    std_textio_readline(STD_TEXTIO, t7, t8, t9);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1724U);
    t3 = xsi_access_variable_all(t2);
    t7 = (t3 + 40U);
    t7 = *((char **)t7);
    t8 = (t7 + 8U);
    t10 = *((int *)t8);
    t9 = (t0 + 1724U);
    t11 = xsi_access_variable_all(t9);
    t12 = (t11 + 40U);
    t12 = *((char **)t12);
    t13 = (t12 + 4U);
    t14 = *((int *)t13);
    t15 = (t0 + 1724U);
    t16 = xsi_access_variable_all(t15);
    t17 = (t16 + 40U);
    t17 = *((char **)t17);
    t18 = (t17 + 0U);
    t19 = *((int *)t18);
    t20 = (t0 + 4968);
    *((int *)t20) = t19;
    t21 = (t0 + 4972);
    *((int *)t21) = t14;
    t22 = (t0 + 4976);
    *((int *)t22) = t10;
    t23 = t19;
    t24 = t14;

LAB8:    t25 = (t24 * t10);
    t26 = (t23 * t10);
    if (t26 <= t25)
        goto LAB9;

LAB11:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 960U);
    t3 = *((char **)t2);
    t2 = (t0 + 4692U);
    t1 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t3, t2, 0);
    if (t1 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4988);
    t7 = (t0 + 2676);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t11 = (t9 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast(t7);

LAB16:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1724U);
    t3 = xsi_access_variable_all(t2);
    t7 = (t3 + 40U);
    t7 = *((char **)t7);
    t8 = (t7 + 8U);
    t10 = *((int *)t8);
    t9 = (t0 + 1724U);
    t11 = xsi_access_variable_all(t9);
    t12 = (t11 + 40U);
    t12 = *((char **)t12);
    t13 = (t12 + 4U);
    t14 = *((int *)t13);
    t15 = (t0 + 1724U);
    t16 = xsi_access_variable_all(t15);
    t17 = (t16 + 40U);
    t17 = *((char **)t17);
    t18 = (t17 + 0U);
    t19 = *((int *)t18);
    t20 = (t0 + 4996);
    *((int *)t20) = t19;
    t21 = (t0 + 5000);
    *((int *)t21) = t14;
    t22 = (t0 + 5004);
    *((int *)t22) = t10;
    t23 = t19;
    t24 = t14;

LAB18:    t25 = (t24 * t10);
    t26 = (t23 * t10);
    if (t26 <= t25)
        goto LAB19;

LAB21:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2712);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 1304U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB9:    xsi_set_current_line(96, ng0);
    t28 = (t0 + 960U);
    t29 = *((char **)t28);
    t28 = (t0 + 4692U);
    t30 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t27, t29, t28, 1);
    t31 = (t27 + 12U);
    t32 = *((unsigned int *)t31);
    t33 = (1U * t32);
    t1 = (31U != t33);
    if (t1 == 1)
        goto LAB12;

LAB13:    t34 = (t0 + 2640);
    t35 = (t34 + 32U);
    t36 = *((char **)t35);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    memcpy(t38, t30, 31U);
    xsi_driver_first_trans_fast(t34);

LAB10:    t2 = (t0 + 4968);
    t23 = *((int *)t2);
    t3 = (t0 + 4972);
    t24 = *((int *)t3);
    t7 = (t0 + 4976);
    t10 = *((int *)t7);
    if (t23 == t24)
        goto LAB11;

LAB14:    t14 = (t23 + t10);
    t23 = t14;
    t8 = (t0 + 4968);
    *((int *)t8) = t23;
    goto LAB8;

LAB12:    xsi_size_not_matching(31U, t33, 0);
    goto LAB13;

LAB15:    xsi_set_current_line(100, ng0);
    t7 = (t0 + 4980);
    t9 = (t0 + 2676);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB16;

LAB19:    xsi_set_current_line(107, ng0);
    t28 = (t0 + 5008);
    t30 = (t0 + 2676);
    t31 = (t30 + 32U);
    t34 = *((char **)t31);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    memcpy(t36, t28, 8U);
    xsi_driver_first_trans_fast(t30);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1724U);
    t3 = xsi_access_variable_all(t2);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t7 = (t0 + 4996);
    t9 = (t0 + 1724U);
    t11 = xsi_access_variable_all(t9);
    t12 = (t11 + 40U);
    t12 = *((char **)t12);
    t13 = (t12 + 0U);
    t14 = *((int *)t13);
    t15 = (t0 + 1724U);
    t16 = xsi_access_variable_all(t15);
    t17 = (t16 + 40U);
    t17 = *((char **)t17);
    t18 = (t17 + 8U);
    t19 = *((int *)t18);
    t25 = *((int *)t7);
    t26 = (t25 - t14);
    t32 = (t26 * t19);
    t33 = (1U * t32);
    t39 = (0 + t33);
    t20 = (t8 + t39);
    t1 = *((unsigned char *)t20);
    t4 = (t1 == (unsigned char)49);
    if (t4 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4996);
    t14 = *((int *)t2);
    t19 = (t14 - 7);
    t32 = (t19 * -1);
    t33 = (1 * t32);
    t39 = (0U + t33);
    t3 = (t0 + 2676);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_delta(t3, t39, 1, 0LL);

LAB23:
LAB20:    t2 = (t0 + 4996);
    t23 = *((int *)t2);
    t3 = (t0 + 5000);
    t24 = *((int *)t3);
    t7 = (t0 + 5004);
    t10 = *((int *)t7);
    if (t23 == t24)
        goto LAB21;

LAB25:    t14 = (t23 + t10);
    t23 = t14;
    t8 = (t0 + 4996);
    *((int *)t8) = t23;
    goto LAB18;

LAB22:    xsi_set_current_line(111, ng0);
    t21 = (t0 + 4996);
    t40 = *((int *)t21);
    t41 = (t40 - 7);
    t42 = (t41 * -1);
    t43 = (1 * t42);
    t44 = (0U + t43);
    t22 = (t0 + 2676);
    t28 = (t22 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)3;
    xsi_driver_first_trans_delta(t22, t44, 1, 0LL);
    goto LAB23;

}


extern void work_a_1774854872_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1774854872_3212880686_p_0,(void *)work_a_1774854872_3212880686_p_1};
	xsi_register_didat("work_a_1774854872_3212880686", "isim/TestBraet_isim_beh.exe.sim/work/a_1774854872_3212880686.didat");
	xsi_register_executes(pe);
}
