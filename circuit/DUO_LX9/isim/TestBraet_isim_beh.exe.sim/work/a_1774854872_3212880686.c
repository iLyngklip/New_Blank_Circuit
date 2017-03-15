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
extern char *STD_TEXTIO;
static const char *ng1 = "ramfile";
extern char *IEEE_P_3564397177;
static const char *ng3 = "C:/New_Blank_Circuit/circuit/main_main.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );


char *work_a_1774854872_3212880686_sub_370326582_3057020925(char *t1, char *t2, char *t3)
{
    char t4[120];
    char t5[16];
    char t17[32];
    char t26[2048];
    char t44[16];
    char *t0;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    int t35;
    int t36;
    char *t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t45;

LAB0:    t6 = ((STD_TEXTIO) + 2032);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (t4 + 4U);
    t10 = xsi_create_file_variable_in_buffer(0, ng1, t6, t2, t8, 1);
    *((char **)t9) = t10;
    t11 = (t4 + 8U);
    t12 = ((STD_TEXTIO) + 1944);
    t13 = (t11 + 32U);
    *((char **)t13) = t12;
    t14 = (t11 + 24U);
    *((char **)t14) = 0;
    t15 = (t11 + 36U);
    *((int *)t15) = 1;
    t16 = (t11 + 28U);
    *((char **)t16) = 0;
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 127;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - 127);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t17 + 16U);
    t22 = (t19 + 0U);
    *((int *)t22) = 15;
    t22 = (t19 + 4U);
    *((int *)t22) = 0;
    t22 = (t19 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 15);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t22 = (t19 + 12U);
    *((unsigned int *)t22) = t21;
    t22 = (t4 + 48U);
    t24 = (t1 + 2968);
    t25 = (t22 + 52U);
    *((char **)t25) = t24;
    t27 = (t22 + 36U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t22 + 40U);
    t29 = (t24 + 44U);
    t30 = *((char **)t29);
    *((char **)t28) = t30;
    t31 = (t22 + 48U);
    *((unsigned int *)t31) = 2048U;
    t32 = (t5 + 4U);
    t33 = (t2 != 0);
    if (t33 == 1)
        goto LAB3;

LAB2:    t34 = (t5 + 8U);
    *((char **)t34) = t3;
    t35 = 127;
    t36 = 0;

LAB4:    if (t35 >= t36)
        goto LAB5;

LAB7:    t6 = (t22 + 36U);
    t7 = *((char **)t6);
    t33 = (2048U != 2048U);
    if (t33 == 1)
        goto LAB12;

LAB13:    t0 = xsi_get_transient_memory(2048U);
    memcpy(t0, t7, 2048U);

LAB1:    xsi_access_variable_delete(t11);
    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    xsi_delete_file_variable(t7);
    return t0;
LAB3:    *((char **)t32) = t2;
    goto LAB2;

LAB5:    t37 = (t4 + 4U);
    t38 = *((char **)t37);
    t39 = std_textio_endfile(t38);
    t40 = (!(t39));
    if (t40 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    if (t35 == t36)
        goto LAB7;

LAB11:    t20 = (t35 + -1);
    t35 = t20;
    goto LAB4;

LAB8:    t41 = (t4 + 4U);
    t42 = *((char **)t41);
    std_textio_readline(STD_TEXTIO, (char *)0, t42, t11);
    t6 = (t22 + 36U);
    t7 = *((char **)t6);
    t20 = (t35 - 127);
    t8 = (t20 * -1);
    xsi_vhdl_check_range_of_index(127, 0, -1, t35);
    t21 = (16U * t8);
    t43 = (0 + t21);
    t6 = (t7 + t43);
    t9 = (t44 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 15;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t23 = (0 - 15);
    t45 = (t23 * -1);
    t45 = (t45 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t45;
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, (char *)0, t11, t6, t44);
    t6 = (t1 + 1500U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t23 = (t20 + 1);
    t6 = (t1 + 1500U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t23;
    t10 = (t1 + 1464U);
    xsi_variable_act(t10);
    goto LAB9;

LAB12:    xsi_size_not_matching(2048U, 2048U, 0);
    goto LAB13;

LAB14:;
}

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

LAB0:    xsi_set_current_line(107, ng3);
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
LAB3:    xsi_set_current_line(110, ng3);
    t2 = (t0 + 1052U);
    t3 = *((char **)t2);
    t20 = (24 - 30);
    t12 = (t20 * -1);
    t13 = (1U * t12);
    t21 = (0 + t13);
    t2 = (t3 + t21);
    t1 = *((unsigned char *)t2);
    t8 = (t0 + 2620);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t15 = *((char **)t11);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_fast(t8);
    t2 = (t0 + 2532);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(108, ng3);
    t8 = (t0 + 1052U);
    t9 = *((char **)t8);
    t8 = (t0 + 4752U);
    t10 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t7, t9, t8, 1);
    t11 = (t7 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t14 = (31U != t13);
    if (t14 == 1)
        goto LAB8;

LAB9:    t15 = (t0 + 2584);
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
    char t20[16];
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
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(130, ng3);
    t2 = (t0 + 1236U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2540);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(131, ng3);
    t7 = (t0 + 868U);
    t8 = *((char **)t7);
    t7 = (t0 + 1636U);
    t9 = *((char **)t7);
    t10 = *((int *)t9);
    t11 = (t10 - 127);
    t12 = (t11 * -1);
    xsi_vhdl_check_range_of_index(127, 0, -1, t10);
    t13 = (16U * t12);
    t14 = (0 + t13);
    t7 = (t8 + t14);
    t15 = (t0 + 2656);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 16U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(132, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t2 = (t0 + 4768U);
    t7 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t20, t3, t2);
    t1 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t7, t20, 0);
    if (t1 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(153, ng3);
    t2 = (t0 + 6936);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB9:    xsi_set_current_line(161, ng3);
    t2 = (t0 + 1636U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t2 = (t0 + 1500U);
    t7 = *((char **)t2);
    t11 = *((int *)t7);
    t1 = (t10 > t11);
    if (t1 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(164, ng3);
    t2 = (t0 + 1636U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (t10 + 1);
    t2 = (t0 + 1636U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t11;

LAB15:    goto LAB3;

LAB5:    t2 = (t0 + 1212U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(133, ng3);
    t8 = (t0 + 1328U);
    t9 = *((char **)t8);
    t8 = (t0 + 4768U);
    t4 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t9, t8, 255);
    if (t4 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(143, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (0 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 7U, 1, 0LL);
    xsi_set_current_line(144, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (1 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 6U, 1, 0LL);
    xsi_set_current_line(145, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (2 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 5U, 1, 0LL);
    xsi_set_current_line(146, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (3 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 4U, 1, 0LL);
    xsi_set_current_line(147, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (4 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 3U, 1, 0LL);
    xsi_set_current_line(148, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (5 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 2U, 1, 0LL);
    xsi_set_current_line(149, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (6 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 1U, 1, 0LL);
    xsi_set_current_line(150, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (7 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 0U, 1, 0LL);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(134, ng3);
    t15 = (t0 + 1328U);
    t16 = *((char **)t15);
    t10 = (8 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t15 = (t16 + t14);
    t5 = *((unsigned char *)t15);
    t17 = (t0 + 2692);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t21 = (t19 + 40U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t5;
    xsi_driver_first_trans_delta(t17, 7U, 1, 0LL);
    xsi_set_current_line(135, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (9 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 6U, 1, 0LL);
    xsi_set_current_line(136, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (10 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 5U, 1, 0LL);
    xsi_set_current_line(137, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (11 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 4U, 1, 0LL);
    xsi_set_current_line(138, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (12 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 3U, 1, 0LL);
    xsi_set_current_line(139, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (13 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 2U, 1, 0LL);
    xsi_set_current_line(140, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (14 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 1U, 1, 0LL);
    xsi_set_current_line(141, ng3);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t10 = (15 - 15);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 2692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t15 = (t9 + 40U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t1;
    xsi_driver_first_trans_delta(t7, 0U, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(162, ng3);
    t2 = (t0 + 1636U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = 0;
    goto LAB15;

}


extern void work_a_1774854872_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1774854872_3212880686_p_0,(void *)work_a_1774854872_3212880686_p_1};
	static char *se[] = {(void *)work_a_1774854872_3212880686_sub_370326582_3057020925};
	xsi_register_didat("work_a_1774854872_3212880686", "isim/TestBraet_isim_beh.exe.sim/work/a_1774854872_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
