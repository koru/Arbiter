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

/* This file is designed for use with ISim build 0xcb73ee62 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/kor/Documents/ArbiterTest/Arbiter_TB.vhd";



static void work_a_4109021394_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1780U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 2156);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1680);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 2156);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1680);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4109021394_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int64 t10;

LAB0:    t1 = (t0 + 1924U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(307, ng0);
    t2 = (t0 + 2192);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(318, ng0);
    t2 = (t0 + 4216);
    t4 = (t0 + 2228);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(319, ng0);
    t2 = (t0 + 4256);
    t4 = (t0 + 2264);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(320, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(321, ng0);
    t2 = (t0 + 2336);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(324, ng0);
    t9 = (100 * 1000000000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(325, ng0);
    t2 = (t0 + 2336);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(326, ng0);
    t9 = (1 * 1000LL);
    t2 = (t0 + 2336);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2336);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(329, ng0);
    t2 = (t0 + 1224U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t10 = (t9 * 10);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(332, ng0);
    t2 = (t0 + 4296);
    t4 = (t0 + 2228);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(333, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(334, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2300);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(335, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t9);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(336, ng0);
    t2 = (t0 + 4336);
    t4 = (t0 + 2228);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(337, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(338, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2300);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(339, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(340, ng0);
    t2 = (t0 + 4376);
    t4 = (t0 + 2228);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 40U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(341, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(342, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 2300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t9);
    t7 = (t0 + 2300);
    xsi_driver_intertial_reject(t7, t9, t9);
    xsi_set_current_line(343, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 1824);
    xsi_process_wait(t2, t9);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(400, ng0);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    goto LAB2;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

}


extern void work_a_4109021394_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4109021394_2372691052_p_0,(void *)work_a_4109021394_2372691052_p_1};
	xsi_register_didat("work_a_4109021394_2372691052", "isim/Arbiter_TB_isim_beh.exe.sim/work/a_4109021394_2372691052.didat");
	xsi_register_executes(pe);
}