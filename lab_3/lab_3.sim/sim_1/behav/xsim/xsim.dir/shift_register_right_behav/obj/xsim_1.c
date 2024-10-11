/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern void execute_6(char*, char *);
extern void execute_10(char*, char *);
extern void execute_12(char*, char *);
extern void execute_15(char*, char *);
extern void execute_17(char*, char *);
extern void execute_20(char*, char *);
extern void execute_22(char*, char *);
extern void execute_25(char*, char *);
extern void execute_27(char*, char *);
extern void execute_30(char*, char *);
extern void execute_32(char*, char *);
extern void execute_35(char*, char *);
extern void execute_37(char*, char *);
extern void execute_40(char*, char *);
extern void execute_42(char*, char *);
extern void execute_45(char*, char *);
extern void execute_47(char*, char *);
extern void execute_50(char*, char *);
extern void execute_52(char*, char *);
extern void execute_55(char*, char *);
extern void execute_57(char*, char *);
extern void execute_60(char*, char *);
extern void execute_62(char*, char *);
extern void execute_65(char*, char *);
extern void execute_67(char*, char *);
extern void execute_70(char*, char *);
extern void execute_72(char*, char *);
extern void execute_75(char*, char *);
extern void execute_77(char*, char *);
extern void execute_80(char*, char *);
extern void execute_82(char*, char *);
extern void execute_85(char*, char *);
extern void execute_87(char*, char *);
extern void execute_90(char*, char *);
extern void execute_92(char*, char *);
extern void execute_95(char*, char *);
extern void execute_97(char*, char *);
extern void execute_100(char*, char *);
extern void execute_102(char*, char *);
extern void execute_105(char*, char *);
extern void execute_107(char*, char *);
extern void execute_110(char*, char *);
extern void execute_112(char*, char *);
extern void execute_115(char*, char *);
extern void execute_117(char*, char *);
extern void execute_120(char*, char *);
extern void execute_122(char*, char *);
extern void execute_125(char*, char *);
extern void execute_127(char*, char *);
extern void execute_130(char*, char *);
extern void execute_132(char*, char *);
extern void execute_135(char*, char *);
extern void execute_137(char*, char *);
extern void execute_140(char*, char *);
extern void execute_142(char*, char *);
extern void execute_145(char*, char *);
extern void execute_147(char*, char *);
extern void execute_150(char*, char *);
extern void execute_152(char*, char *);
extern void execute_155(char*, char *);
extern void execute_157(char*, char *);
extern void execute_160(char*, char *);
extern void execute_162(char*, char *);
extern void execute_165(char*, char *);
extern void execute_167(char*, char *);
extern void execute_170(char*, char *);
extern void execute_172(char*, char *);
extern void execute_175(char*, char *);
extern void execute_177(char*, char *);
extern void execute_180(char*, char *);
extern void execute_182(char*, char *);
extern void execute_185(char*, char *);
extern void execute_187(char*, char *);
extern void execute_190(char*, char *);
extern void execute_192(char*, char *);
extern void execute_195(char*, char *);
extern void execute_197(char*, char *);
extern void execute_200(char*, char *);
extern void execute_202(char*, char *);
extern void execute_205(char*, char *);
extern void execute_207(char*, char *);
extern void execute_210(char*, char *);
extern void execute_212(char*, char *);
extern void execute_215(char*, char *);
extern void execute_217(char*, char *);
extern void execute_220(char*, char *);
extern void execute_222(char*, char *);
extern void execute_225(char*, char *);
extern void execute_227(char*, char *);
extern void execute_230(char*, char *);
extern void execute_232(char*, char *);
extern void execute_235(char*, char *);
extern void execute_237(char*, char *);
extern void execute_240(char*, char *);
extern void execute_242(char*, char *);
extern void execute_245(char*, char *);
extern void execute_247(char*, char *);
extern void execute_250(char*, char *);
extern void execute_252(char*, char *);
extern void execute_255(char*, char *);
extern void execute_257(char*, char *);
extern void execute_260(char*, char *);
extern void execute_262(char*, char *);
extern void execute_265(char*, char *);
extern void execute_267(char*, char *);
extern void execute_270(char*, char *);
extern void execute_272(char*, char *);
extern void execute_275(char*, char *);
extern void execute_277(char*, char *);
extern void execute_280(char*, char *);
extern void execute_282(char*, char *);
extern void execute_285(char*, char *);
extern void execute_287(char*, char *);
extern void execute_290(char*, char *);
extern void execute_292(char*, char *);
extern void execute_295(char*, char *);
extern void execute_297(char*, char *);
extern void execute_300(char*, char *);
extern void execute_302(char*, char *);
extern void execute_305(char*, char *);
extern void execute_307(char*, char *);
extern void execute_310(char*, char *);
extern void execute_312(char*, char *);
extern void execute_315(char*, char *);
extern void execute_317(char*, char *);
extern void execute_320(char*, char *);
extern void execute_322(char*, char *);
extern void execute_325(char*, char *);
extern void execute_9(char*, char *);
extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[131] = {(funcp)execute_6, (funcp)execute_10, (funcp)execute_12, (funcp)execute_15, (funcp)execute_17, (funcp)execute_20, (funcp)execute_22, (funcp)execute_25, (funcp)execute_27, (funcp)execute_30, (funcp)execute_32, (funcp)execute_35, (funcp)execute_37, (funcp)execute_40, (funcp)execute_42, (funcp)execute_45, (funcp)execute_47, (funcp)execute_50, (funcp)execute_52, (funcp)execute_55, (funcp)execute_57, (funcp)execute_60, (funcp)execute_62, (funcp)execute_65, (funcp)execute_67, (funcp)execute_70, (funcp)execute_72, (funcp)execute_75, (funcp)execute_77, (funcp)execute_80, (funcp)execute_82, (funcp)execute_85, (funcp)execute_87, (funcp)execute_90, (funcp)execute_92, (funcp)execute_95, (funcp)execute_97, (funcp)execute_100, (funcp)execute_102, (funcp)execute_105, (funcp)execute_107, (funcp)execute_110, (funcp)execute_112, (funcp)execute_115, (funcp)execute_117, (funcp)execute_120, (funcp)execute_122, (funcp)execute_125, (funcp)execute_127, (funcp)execute_130, (funcp)execute_132, (funcp)execute_135, (funcp)execute_137, (funcp)execute_140, (funcp)execute_142, (funcp)execute_145, (funcp)execute_147, (funcp)execute_150, (funcp)execute_152, (funcp)execute_155, (funcp)execute_157, (funcp)execute_160, (funcp)execute_162, (funcp)execute_165, (funcp)execute_167, (funcp)execute_170, (funcp)execute_172, (funcp)execute_175, (funcp)execute_177, (funcp)execute_180, (funcp)execute_182, (funcp)execute_185, (funcp)execute_187, (funcp)execute_190, (funcp)execute_192, (funcp)execute_195, (funcp)execute_197, (funcp)execute_200, (funcp)execute_202, (funcp)execute_205, (funcp)execute_207, (funcp)execute_210, (funcp)execute_212, (funcp)execute_215, (funcp)execute_217, (funcp)execute_220, (funcp)execute_222, (funcp)execute_225, (funcp)execute_227, (funcp)execute_230, (funcp)execute_232, (funcp)execute_235, (funcp)execute_237, (funcp)execute_240, (funcp)execute_242, (funcp)execute_245, (funcp)execute_247, (funcp)execute_250, (funcp)execute_252, (funcp)execute_255, (funcp)execute_257, (funcp)execute_260, (funcp)execute_262, (funcp)execute_265, (funcp)execute_267, (funcp)execute_270, (funcp)execute_272, (funcp)execute_275, (funcp)execute_277, (funcp)execute_280, (funcp)execute_282, (funcp)execute_285, (funcp)execute_287, (funcp)execute_290, (funcp)execute_292, (funcp)execute_295, (funcp)execute_297, (funcp)execute_300, (funcp)execute_302, (funcp)execute_305, (funcp)execute_307, (funcp)execute_310, (funcp)execute_312, (funcp)execute_315, (funcp)execute_317, (funcp)execute_320, (funcp)execute_322, (funcp)execute_325, (funcp)execute_9, (funcp)transaction_0, (funcp)vhdl_transfunc_eventcallback};
const int NumRelocateId= 131;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/shift_register_right_behav/xsim.reloc",  (void **)funcTab, 131);
	iki_vhdl_file_variable_register(dp + 12576);
	iki_vhdl_file_variable_register(dp + 12632);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/shift_register_right_behav/xsim.reloc");
}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/shift_register_right_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/shift_register_right_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/shift_register_right_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/shift_register_right_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
