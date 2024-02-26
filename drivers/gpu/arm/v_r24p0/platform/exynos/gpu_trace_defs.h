/* drivers/gpu/arm/.../platform/gpu_treace_defs.h
 *
 * Copyright 2011 by S.LSI. Samsung Electronics Inc.
 * San#24, Nongseo-Dong, Giheung-Gu, Yongin, Korea
 *
 * Samsung SoC Mali-T Series DDK porting layer
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software FoundatIon.
 */

/**
 * @file gpu_trace_defs.h
 * DDK porting layer.
 */

#if 0 /* Dummy section to avoid breaking formatting */
int dummy_array[] = {
#endif

	/* MALI_SEC_INTEGRATION */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_JM_IRQ),
	KBASE_TRACE_CODE_MAKE_CODE(LSI_JM_IRQ_E),
	KBASE_TRACE_CODE_MAKE_CODE(LSI_MMU_IRQ),
	KBASE_TRACE_CODE_MAKE_CODE(LSI_MMU_IRQ_E),
	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_IRQ),
	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_IRQ_E),

	KBASE_TRACE_CODE_MAKE_CODE(KBASE_DEVICE_SUSPEND),
	KBASE_TRACE_CODE_MAKE_CODE(KBASE_DEVICE_SUSPEND_RESTORE),
	KBASE_TRACE_CODE_MAKE_CODE(KBASE_DEVICE_RESUME),
	KBASE_TRACE_CODE_MAKE_CODE(KBASE_DEVICE_SUSPEND_DUMMY),
	KBASE_TRACE_CODE_MAKE_CODE(KBASE_DEVICE_RESUME_DUMMY),
	KBASE_TRACE_CODE_MAKE_CODE(KBASE_DEVICE_PM_SUSPEND),
	KBASE_TRACE_CODE_MAKE_CODE(KBASE_DEVICE_PM_RESUME),
	KBASE_TRACE_CODE_MAKE_CODE(KBASE_DEVICE_PM_WAIT_WQ_RUN),
	KBASE_TRACE_CODE_MAKE_CODE(KBASE_DEVICE_PM_WAIT_WQ_QUEUE_WORK),
	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_RPM_RESUME_API), /* gpu on */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_RPM_SUSPEND_API), /* gpu off */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_SUSPEND_CALLBACK), /* suspend */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_ON), /* gpu on */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_OFF), /* gpu off */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_DVS_ON), /* gpu dvs on */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_DVS_OFF), /* gpu dvs off */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_SUSPEND), /* suspend */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_RESUME), /* resume */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_CLOCK_VALUE), /* clock */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_TMU_VALUE), /* TMU LOCK info */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_VOL_VALUE), /* voltage */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_REGISTER_DUMP), /* CMU & PMU info */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_CLOCK_ON), /* GPU CLOCK ON */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_CLOCK_OFF), /* GPU CLOCK OFF*/

	KBASE_TRACE_CODE_MAKE_CODE(LSI_HWCNT_ON_DVFS), /* HWCNT ON DVFS */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_HWCNT_OFF_DVFS), /* HWCNT OFF DVFS */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_HWCNT_ON_GPR), /* HWCNT ON GPR */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_HWCNT_OFF_GPR), /* HWCNT OFF GPR */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_HWCNT_BT_ON), /* HWCNT BT ON */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_HWCNT_BT_OFF), /* HWCNT BT OFF */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_HWCNT_VSYNC_SKIP), /* HWCNT VSYNC SKIP */

	KBASE_TRACE_CODE_MAKE_CODE(LSI_SECURE_WORLD_ENTER), /* SECURE RENDERING START */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_SECURE_WORLD_EXIT), /* SECURE RENDERING END */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_SECURE_CACHE), /* SECURE RENDERING CACHE FLUSH */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_SECURE_CACHE_END), /* SECURE RENDERING CACHE FLUSH END */

	KBASE_TRACE_CODE_MAKE_CODE(LSI_KBASE_PM_INIT_HW), /* SECURE RENDERING END */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_IFPM_POWER_ON), /* IFPM Power on */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_IFPM_POWER_OFF), /* IFPM Power off */

	KBASE_TRACE_CODE_MAKE_CODE(LSI_RESUME_CHECK), /* is resume check */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_RESUME_FREQ), /* resume freq check */

	KBASE_TRACE_CODE_MAKE_CODE(LSI_CHECKSUM), /* CHECKSUM*/
	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_MAX_LOCK), /* GPU MAX CLOCK LOCK */
	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_MIN_LOCK), /* GPU MIN CLOCK LOCK */

	KBASE_TRACE_CODE_MAKE_CODE(LSI_GPU_SECURE), /* GPU Secure Rendering */

	KBASE_TRACE_CODE_MAKE_CODE(LSI_ZAP_TIMEOUT),
	KBASE_TRACE_CODE_MAKE_CODE(LSI_RESET_GPU_EARLY_DUPE),
	KBASE_TRACE_CODE_MAKE_CODE(LSI_RESET_RACE_DETECTED_EARLY_OUT),
	KBASE_TRACE_CODE_MAKE_CODE(LSI_PM_SUSPEND),
#if 0
};
#endif
