#include "../cmucal.h"
#include "cmucal-sfr.h"
#include "cmucal-qch.h"

/*=================CMUCAL version: S5E7872================================*/

/*====================The section of QCH nodes===================*/
unsigned int cmucal_qch_size = 197;


struct cmucal_qch cmucal_qch_list[] = {
	CLK_QCH(APBIF_GPIO_ALIVE_QCH, QCH_CON_APBIF_GPIO_ALIVE_QCH_ENABLE, QCH_CON_APBIF_GPIO_ALIVE_QCH_CLOCK_REQ, QCH_CON_APBIF_GPIO_ALIVE_QCH_EXPIRE_VAL),
	CLK_QCH(APBIF_PMU_ALIVE_QCH, QCH_CON_APBIF_PMU_ALIVE_QCH_ENABLE, QCH_CON_APBIF_PMU_ALIVE_QCH_CLOCK_REQ, QCH_CON_APBIF_PMU_ALIVE_QCH_EXPIRE_VAL),
	CLK_QCH(APM_QCH_CPU, QCH_CON_APM_QCH_CPU_ENABLE, QCH_CON_APM_QCH_CPU_CLOCK_REQ, QCH_CON_APM_QCH_CPU_EXPIRE_VAL),
	CLK_QCH(APM_QCH_INTMEM, QCH_CON_APM_QCH_INTMEM_ENABLE, QCH_CON_APM_QCH_INTMEM_CLOCK_REQ, QCH_CON_APM_QCH_INTMEM_EXPIRE_VAL),
	CLK_QCH(APM_QCH_OSCCLK, DMYQCH_CON_APM_QCH_OSCCLK_ENABLE, DMYQCH_CON_APM_QCH_OSCCLK_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(APM_QCH_DBG, QCH_CON_APM_QCH_DBG_ENABLE, QCH_CON_APM_QCH_DBG_CLOCK_REQ, QCH_CON_APM_QCH_DBG_EXPIRE_VAL),
	CLK_QCH(APM_QCH_SYS, QCH_CON_APM_QCH_SYS_ENABLE, QCH_CON_APM_QCH_SYS_CLOCK_REQ, QCH_CON_APM_QCH_SYS_EXPIRE_VAL),
	CLK_QCH(APM_CMU_APM_QCH, QCH_CON_APM_CMU_APM_QCH_ENABLE, QCH_CON_APM_CMU_APM_QCH_CLOCK_REQ, QCH_CON_APM_CMU_APM_QCH_EXPIRE_VAL),
	CLK_QCH(I2C_APM_QCH, QCH_CON_I2C_APM_QCH_ENABLE, QCH_CON_I2C_APM_QCH_CLOCK_REQ, QCH_CON_I2C_APM_QCH_EXPIRE_VAL),
	CLK_QCH(IP_BATCHER_AP_QCH, QCH_CON_IP_BATCHER_AP_QCH_ENABLE, QCH_CON_IP_BATCHER_AP_QCH_CLOCK_REQ, QCH_CON_IP_BATCHER_AP_QCH_EXPIRE_VAL),
	CLK_QCH(IP_BATCHER_CP_QCH, QCH_CON_IP_BATCHER_CP_QCH_ENABLE, QCH_CON_IP_BATCHER_CP_QCH_CLOCK_REQ, QCH_CON_IP_BATCHER_CP_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_P_ALIVE_QCH, QCH_CON_LHM_AXI_P_ALIVE_QCH_ENABLE, QCH_CON_LHM_AXI_P_ALIVE_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_P_ALIVE_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_D_ALIVE_QCH, QCH_CON_LHS_AXI_D_ALIVE_QCH_ENABLE, QCH_CON_LHS_AXI_D_ALIVE_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_D_ALIVE_QCH_EXPIRE_VAL),
	CLK_QCH(MAILBOX_APM2AP_QCH, QCH_CON_MAILBOX_APM2AP_QCH_ENABLE, QCH_CON_MAILBOX_APM2AP_QCH_CLOCK_REQ, QCH_CON_MAILBOX_APM2AP_QCH_EXPIRE_VAL),
	CLK_QCH(MAILBOX_APM2CP_QCH, QCH_CON_MAILBOX_APM2CP_QCH_ENABLE, QCH_CON_MAILBOX_APM2CP_QCH_CLOCK_REQ, QCH_CON_MAILBOX_APM2CP_QCH_EXPIRE_VAL),
	CLK_QCH(MAILBOX_APM2GNSS_QCH, QCH_CON_MAILBOX_APM2GNSS_QCH_ENABLE, QCH_CON_MAILBOX_APM2GNSS_QCH_CLOCK_REQ, QCH_CON_MAILBOX_APM2GNSS_QCH_EXPIRE_VAL),
	CLK_QCH(MAILBOX_APM2WLBT_QCH, QCH_CON_MAILBOX_APM2WLBT_QCH_ENABLE, QCH_CON_MAILBOX_APM2WLBT_QCH_CLOCK_REQ, QCH_CON_MAILBOX_APM2WLBT_QCH_EXPIRE_VAL),
	CLK_QCH(MP_APBSEMA_HWACG_2CH_QCH, QCH_CON_MP_APBSEMA_HWACG_2CH_QCH_ENABLE, QCH_CON_MP_APBSEMA_HWACG_2CH_QCH_CLOCK_REQ, QCH_CON_MP_APBSEMA_HWACG_2CH_QCH_EXPIRE_VAL),
	CLK_QCH(SPEEDY_QCH, QCH_CON_SPEEDY_QCH_ENABLE, QCH_CON_SPEEDY_QCH_CLOCK_REQ, QCH_CON_SPEEDY_QCH_EXPIRE_VAL),
	CLK_QCH(SPEEDY_QCH_OSCCLK, DMYQCH_CON_SPEEDY_QCH_OSCCLK_ENABLE, DMYQCH_CON_SPEEDY_QCH_OSCCLK_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(SYSREG_APM_QCH, QCH_CON_SYSREG_APM_QCH_ENABLE, QCH_CON_SYSREG_APM_QCH_CLOCK_REQ, QCH_CON_SYSREG_APM_QCH_EXPIRE_VAL),
	CLK_QCH(WDT_APM_QCH, QCH_CON_WDT_APM_QCH_ENABLE, QCH_CON_WDT_APM_QCH_CLOCK_REQ, QCH_CON_WDT_APM_QCH_EXPIRE_VAL),
	CLK_QCH(WDT_APM_QCH_OSCCLK, DMYQCH_CON_WDT_APM_QCH_OSCCLK_ENABLE, DMYQCH_CON_WDT_APM_QCH_OSCCLK_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(CMU_CMU_CMUREF_QCH, DMYQCH_CON_CMU_CMU_CMUREF_QCH_ENABLE, DMYQCH_CON_CMU_CMU_CMUREF_QCH_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(DFTMUX_TOP_QCH_CLK_CSIS0, DMYQCH_CON_DFTMUX_TOP_QCH_CLK_CSIS0_ENABLE, DMYQCH_CON_DFTMUX_TOP_QCH_CLK_CSIS0_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(DFTMUX_TOP_QCH_CLK_CSIS1, DMYQCH_CON_DFTMUX_TOP_QCH_CLK_CSIS1_ENABLE, DMYQCH_CON_DFTMUX_TOP_QCH_CLK_CSIS1_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(DFTMUX_TOP_QCH_CLK_CSIS2, DMYQCH_CON_DFTMUX_TOP_QCH_CLK_CSIS2_ENABLE, DMYQCH_CON_DFTMUX_TOP_QCH_CLK_CSIS2_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(CLUSTER0_QCH_CPU, DMYQCH_CON_CLUSTER0_QCH_CPU_ENABLE, DMYQCH_CON_CLUSTER0_QCH_CPU_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(CLUSTER0_QCH_DBG, DMYQCH_CON_CLUSTER0_QCH_DBG_ENABLE, DMYQCH_CON_CLUSTER0_QCH_DBG_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(CMU_CPUCL0_SHORTSTOP_QCH, QCH_CON_CMU_CPUCL0_SHORTSTOP_QCH_ENABLE, QCH_CON_CMU_CPUCL0_SHORTSTOP_QCH_CLOCK_REQ, QCH_CON_CMU_CPUCL0_SHORTSTOP_QCH_EXPIRE_VAL),
	CLK_QCH(CPUCL0_CMU_CPUCL0_QCH, QCH_CON_CPUCL0_CMU_CPUCL0_QCH_ENABLE, QCH_CON_CPUCL0_CMU_CPUCL0_QCH_CLOCK_REQ, QCH_CON_CPUCL0_CMU_CPUCL0_QCH_EXPIRE_VAL),
	CLK_QCH(CSSYS_DBG_QCH, DMYQCH_CON_CSSYS_DBG_QCH_ENABLE, DMYQCH_CON_CSSYS_DBG_QCH_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(DUMP_PC_CPUCL0_QCH, QCH_CON_DUMP_PC_CPUCL0_QCH_ENABLE, QCH_CON_DUMP_PC_CPUCL0_QCH_CLOCK_REQ, QCH_CON_DUMP_PC_CPUCL0_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_P_CPUCL0_QCH, QCH_CON_LHM_AXI_P_CPUCL0_QCH_ENABLE, QCH_CON_LHM_AXI_P_CPUCL0_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_P_CPUCL0_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_ACE_D_CPUCL0_QCH, QCH_CON_LHS_ACE_D_CPUCL0_QCH_ENABLE, QCH_CON_LHS_ACE_D_CPUCL0_QCH_CLOCK_REQ, QCH_CON_LHS_ACE_D_CPUCL0_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_T_CSSYS_DBG_QCH, QCH_CON_LHS_AXI_T_CSSYS_DBG_QCH_ENABLE, QCH_CON_LHS_AXI_T_CSSYS_DBG_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_T_CSSYS_DBG_QCH_EXPIRE_VAL),
	CLK_QCH(SECJTAG_QCH, QCH_CON_SECJTAG_QCH_ENABLE, QCH_CON_SECJTAG_QCH_CLOCK_REQ, QCH_CON_SECJTAG_QCH_EXPIRE_VAL),
	CLK_QCH(SYSREG_CPUCL0_QCH, QCH_CON_SYSREG_CPUCL0_QCH_ENABLE, QCH_CON_SYSREG_CPUCL0_QCH_CLOCK_REQ, QCH_CON_SYSREG_CPUCL0_QCH_EXPIRE_VAL),
	CLK_QCH(CLUSTER1_QCH_CPU, DMYQCH_CON_CLUSTER1_QCH_CPU_ENABLE, DMYQCH_CON_CLUSTER1_QCH_CPU_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(CLUSTER1_QCH_DBG, DMYQCH_CON_CLUSTER1_QCH_DBG_ENABLE, DMYQCH_CON_CLUSTER1_QCH_DBG_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(CMU_CPUCL1_SHORTSTOP_QCH, QCH_CON_CMU_CPUCL1_SHORTSTOP_QCH_ENABLE, QCH_CON_CMU_CPUCL1_SHORTSTOP_QCH_CLOCK_REQ, QCH_CON_CMU_CPUCL1_SHORTSTOP_QCH_EXPIRE_VAL),
	CLK_QCH(CPUCL1_CMU_CPUCL1_QCH, QCH_CON_CPUCL1_CMU_CPUCL1_QCH_ENABLE, QCH_CON_CPUCL1_CMU_CPUCL1_QCH_CLOCK_REQ, QCH_CON_CPUCL1_CMU_CPUCL1_QCH_EXPIRE_VAL),
	CLK_QCH(DUMP_PC_CPUCL1_QCH, QCH_CON_DUMP_PC_CPUCL1_QCH_ENABLE, QCH_CON_DUMP_PC_CPUCL1_QCH_CLOCK_REQ, QCH_CON_DUMP_PC_CPUCL1_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_P_CPUCL1_QCH, QCH_CON_LHM_AXI_P_CPUCL1_QCH_ENABLE, QCH_CON_LHM_AXI_P_CPUCL1_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_P_CPUCL1_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_ACE_D_CPUCL1_QCH, QCH_CON_LHS_ACE_D_CPUCL1_QCH_ENABLE, QCH_CON_LHS_ACE_D_CPUCL1_QCH_CLOCK_REQ, QCH_CON_LHS_ACE_D_CPUCL1_QCH_EXPIRE_VAL),
	CLK_QCH(SYSREG_CPUCL1_QCH, QCH_CON_SYSREG_CPUCL1_QCH_ENABLE, QCH_CON_SYSREG_CPUCL1_QCH_CLOCK_REQ, QCH_CON_SYSREG_CPUCL1_QCH_EXPIRE_VAL),
	CLK_QCH(ABOX_QCH_ABOX, DMYQCH_CON_ABOX_QCH_ABOX_ENABLE, DMYQCH_CON_ABOX_QCH_ABOX_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(ABOX_QCH_CPU, DMYQCH_CON_ABOX_QCH_CPU_ENABLE, DMYQCH_CON_ABOX_QCH_CPU_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(ABOX_QCH_BUS, QCH_CON_ABOX_QCH_BUS_ENABLE, QCH_CON_ABOX_QCH_BUS_CLOCK_REQ, QCH_CON_ABOX_QCH_BUS_EXPIRE_VAL),
	CLK_QCH(ABOX_QCH_UAIF0, QCH_CON_ABOX_QCH_UAIF0_ENABLE, QCH_CON_ABOX_QCH_UAIF0_CLOCK_REQ, QCH_CON_ABOX_QCH_UAIF0_EXPIRE_VAL),
	CLK_QCH(ABOX_QCH_UAIF2, QCH_CON_ABOX_QCH_UAIF2_ENABLE, QCH_CON_ABOX_QCH_UAIF2_CLOCK_REQ, QCH_CON_ABOX_QCH_UAIF2_EXPIRE_VAL),
	CLK_QCH(ABOX_QCH_UAIF3, QCH_CON_ABOX_QCH_UAIF3_ENABLE, QCH_CON_ABOX_QCH_UAIF3_CLOCK_REQ, QCH_CON_ABOX_QCH_UAIF3_EXPIRE_VAL),
	CLK_QCH(ABOX_QCH_FM, DMYQCH_CON_ABOX_QCH_FM_ENABLE, DMYQCH_CON_ABOX_QCH_FM_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(DISPAUD_CMU_DISPAUD_QCH, QCH_CON_DISPAUD_CMU_DISPAUD_QCH_ENABLE, QCH_CON_DISPAUD_CMU_DISPAUD_QCH_CLOCK_REQ, QCH_CON_DISPAUD_CMU_DISPAUD_QCH_EXPIRE_VAL),
	CLK_QCH(DPU_QCH_DPP, QCH_CON_DPU_QCH_DPP_ENABLE, QCH_CON_DPU_QCH_DPP_CLOCK_REQ, QCH_CON_DPU_QCH_DPP_EXPIRE_VAL),
	CLK_QCH(DPU_QCH_DMA, QCH_CON_DPU_QCH_DMA_ENABLE, QCH_CON_DPU_QCH_DMA_CLOCK_REQ, QCH_CON_DPU_QCH_DMA_EXPIRE_VAL),
	CLK_QCH(DPU_QCH_DECON0, QCH_CON_DPU_QCH_DECON0_ENABLE, QCH_CON_DPU_QCH_DECON0_CLOCK_REQ, QCH_CON_DPU_QCH_DECON0_EXPIRE_VAL),
	CLK_QCH(GPIO_DISPAUD_QCH, QCH_CON_GPIO_DISPAUD_QCH_ENABLE, QCH_CON_GPIO_DISPAUD_QCH_CLOCK_REQ, QCH_CON_GPIO_DISPAUD_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_P_DISPAUD_QCH, QCH_CON_LHM_AXI_P_DISPAUD_QCH_ENABLE, QCH_CON_LHM_AXI_P_DISPAUD_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_P_DISPAUD_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_D_ABOX_QCH, QCH_CON_LHS_AXI_D_ABOX_QCH_ENABLE, QCH_CON_LHS_AXI_D_ABOX_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_D_ABOX_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_D_DPU_QCH, QCH_CON_LHS_AXI_D_DPU_QCH_ENABLE, QCH_CON_LHS_AXI_D_DPU_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_D_DPU_QCH_EXPIRE_VAL),
	CLK_QCH(BCM_ABOX_QCH, QCH_CON_BCM_ABOX_QCH_ENABLE, QCH_CON_BCM_ABOX_QCH_CLOCK_REQ, QCH_CON_BCM_ABOX_QCH_EXPIRE_VAL),
	CLK_QCH(BCM_DPU_QCH, QCH_CON_BCM_DPU_QCH_ENABLE, QCH_CON_BCM_DPU_QCH_CLOCK_REQ, QCH_CON_BCM_DPU_QCH_EXPIRE_VAL),
	CLK_QCH(SMMU_ABOX_QCH, QCH_CON_SMMU_ABOX_QCH_ENABLE, QCH_CON_SMMU_ABOX_QCH_CLOCK_REQ, QCH_CON_SMMU_ABOX_QCH_EXPIRE_VAL),
	CLK_QCH(SMMU_DPU_QCH, QCH_CON_SMMU_DPU_QCH_ENABLE, QCH_CON_SMMU_DPU_QCH_CLOCK_REQ, QCH_CON_SMMU_DPU_QCH_EXPIRE_VAL),
	CLK_QCH(SYSREG_DISPAUD_QCH, QCH_CON_SYSREG_DISPAUD_QCH_ENABLE, QCH_CON_SYSREG_DISPAUD_QCH_CLOCK_REQ, QCH_CON_SYSREG_DISPAUD_QCH_EXPIRE_VAL),
	CLK_QCH(WDT_ABOXCPU_QCH, QCH_CON_WDT_ABOXCPU_QCH_ENABLE, QCH_CON_WDT_ABOXCPU_QCH_CLOCK_REQ, QCH_CON_WDT_ABOXCPU_QCH_EXPIRE_VAL),
	CLK_QCH(ADM_AHB_SSS_QCH, QCH_CON_ADM_AHB_SSS_QCH_ENABLE, QCH_CON_ADM_AHB_SSS_QCH_CLOCK_REQ, QCH_CON_ADM_AHB_SSS_QCH_EXPIRE_VAL),
	CLK_QCH(FSYS_CMU_FSYS_QCH, QCH_CON_FSYS_CMU_FSYS_QCH_ENABLE, QCH_CON_FSYS_CMU_FSYS_QCH_CLOCK_REQ, QCH_CON_FSYS_CMU_FSYS_QCH_EXPIRE_VAL),
	CLK_QCH(GPIO_FSYS_QCH, QCH_CON_GPIO_FSYS_QCH_ENABLE, QCH_CON_GPIO_FSYS_QCH_CLOCK_REQ, QCH_CON_GPIO_FSYS_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_P_FSYS_QCH, QCH_CON_LHM_AXI_P_FSYS_QCH_ENABLE, QCH_CON_LHM_AXI_P_FSYS_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_P_FSYS_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_D_FSYS_QCH, QCH_CON_LHS_AXI_D_FSYS_QCH_ENABLE, QCH_CON_LHS_AXI_D_FSYS_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_D_FSYS_QCH_EXPIRE_VAL),
	CLK_QCH(MMC_CARD_QCH, QCH_CON_MMC_CARD_QCH_ENABLE, QCH_CON_MMC_CARD_QCH_CLOCK_REQ, QCH_CON_MMC_CARD_QCH_EXPIRE_VAL),
	CLK_QCH(MMC_EMBD_QCH, QCH_CON_MMC_EMBD_QCH_ENABLE, QCH_CON_MMC_EMBD_QCH_CLOCK_REQ, QCH_CON_MMC_EMBD_QCH_EXPIRE_VAL),
	CLK_QCH(MMC_SDIO_QCH, QCH_CON_MMC_SDIO_QCH_ENABLE, QCH_CON_MMC_SDIO_QCH_CLOCK_REQ, QCH_CON_MMC_SDIO_QCH_EXPIRE_VAL),
	CLK_QCH(BCM_FSYS_QCH, QCH_CON_BCM_FSYS_QCH_ENABLE, QCH_CON_BCM_FSYS_QCH_CLOCK_REQ, QCH_CON_BCM_FSYS_QCH_EXPIRE_VAL),
	CLK_QCH(RTIC_QCH, QCH_CON_RTIC_QCH_ENABLE, QCH_CON_RTIC_QCH_CLOCK_REQ, QCH_CON_RTIC_QCH_EXPIRE_VAL),
	CLK_QCH(SSS_QCH, QCH_CON_SSS_QCH_ENABLE, QCH_CON_SSS_QCH_CLOCK_REQ, QCH_CON_SSS_QCH_EXPIRE_VAL),
	CLK_QCH(SYSREG_FSYS_QCH, QCH_CON_SYSREG_FSYS_QCH_ENABLE, QCH_CON_SYSREG_FSYS_QCH_CLOCK_REQ, QCH_CON_SYSREG_FSYS_QCH_EXPIRE_VAL),
	CLK_QCH(USB20DRD_QCH_HSDRD, QCH_CON_USB20DRD_QCH_HSDRD_ENABLE, QCH_CON_USB20DRD_QCH_HSDRD_CLOCK_REQ, QCH_CON_USB20DRD_QCH_HSDRD_EXPIRE_VAL),
	CLK_QCH(USB20DRD_QCH_USB, QCH_CON_USB20DRD_QCH_USB_ENABLE, QCH_CON_USB20DRD_QCH_USB_CLOCK_REQ, QCH_CON_USB20DRD_QCH_USB_EXPIRE_VAL),
	CLK_QCH(AGPU_QCH, QCH_CON_AGPU_QCH_ENABLE, QCH_CON_AGPU_QCH_CLOCK_REQ, QCH_CON_AGPU_QCH_EXPIRE_VAL),
	CLK_QCH(G3D_CMU_G3D_QCH, QCH_CON_G3D_CMU_G3D_QCH_ENABLE, QCH_CON_G3D_CMU_G3D_QCH_CLOCK_REQ, QCH_CON_G3D_CMU_G3D_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_G3DSFR_QCH, QCH_CON_LHM_AXI_G3DSFR_QCH_ENABLE, QCH_CON_LHM_AXI_G3DSFR_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_G3DSFR_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_P_G3D_QCH, QCH_CON_LHM_AXI_P_G3D_QCH_ENABLE, QCH_CON_LHM_AXI_P_G3D_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_P_G3D_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_D_G3D_QCH, QCH_CON_LHS_AXI_D_G3D_QCH_ENABLE, QCH_CON_LHS_AXI_D_G3D_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_D_G3D_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_G3DSFR_QCH, QCH_CON_LHS_AXI_G3DSFR_QCH_ENABLE, QCH_CON_LHS_AXI_G3DSFR_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_G3DSFR_QCH_EXPIRE_VAL),
	CLK_QCH(SYSREG_G3D_QCH, QCH_CON_SYSREG_G3D_QCH_ENABLE, QCH_CON_SYSREG_G3D_QCH_CLOCK_REQ, QCH_CON_SYSREG_G3D_QCH_EXPIRE_VAL),
	CLK_QCH(ASYNCM_P_IS_QCH, QCH_CON_ASYNCM_P_IS_QCH_ENABLE, QCH_CON_ASYNCM_P_IS_QCH_CLOCK_REQ, QCH_CON_ASYNCM_P_IS_QCH_EXPIRE_VAL),
	CLK_QCH(ASYNCS_D0_IS_QCH, QCH_CON_ASYNCS_D0_IS_QCH_ENABLE, QCH_CON_ASYNCS_D0_IS_QCH_CLOCK_REQ, QCH_CON_ASYNCS_D0_IS_QCH_EXPIRE_VAL),
	CLK_QCH(ASYNCS_D1_IS_QCH, QCH_CON_ASYNCS_D1_IS_QCH_ENABLE, QCH_CON_ASYNCS_D1_IS_QCH_CLOCK_REQ, QCH_CON_ASYNCS_D1_IS_QCH_EXPIRE_VAL),
	CLK_QCH(IS_CMU_IS_QCH, QCH_CON_IS_CMU_IS_QCH_ENABLE, QCH_CON_IS_CMU_IS_QCH_CLOCK_REQ, QCH_CON_IS_CMU_IS_QCH_EXPIRE_VAL),
	CLK_QCH(BCM_NRT_QCH, QCH_CON_BCM_NRT_QCH_ENABLE, QCH_CON_BCM_NRT_QCH_CLOCK_REQ, QCH_CON_BCM_NRT_QCH_EXPIRE_VAL),
	CLK_QCH(BCM_RT_QCH, QCH_CON_BCM_RT_QCH_ENABLE, QCH_CON_BCM_RT_QCH_CLOCK_REQ, QCH_CON_BCM_RT_QCH_EXPIRE_VAL),
	CLK_QCH(SMMU_IS_QCH, QCH_CON_SMMU_IS_QCH_ENABLE, QCH_CON_SMMU_IS_QCH_CLOCK_REQ, QCH_CON_SMMU_IS_QCH_EXPIRE_VAL),
	CLK_QCH(SYSREG_IS_QCH, QCH_CON_SYSREG_IS_QCH_ENABLE, QCH_CON_SYSREG_IS_QCH_CLOCK_REQ, QCH_CON_SYSREG_IS_QCH_EXPIRE_VAL),
	CLK_QCH(IS5P15P0_IS_QCH_ISP, QCH_CON_IS5P15P0_IS_QCH_ISP_ENABLE, QCH_CON_IS5P15P0_IS_QCH_ISP_CLOCK_REQ, QCH_CON_IS5P15P0_IS_QCH_ISP_EXPIRE_VAL),
	CLK_QCH(IS5P15P0_IS_QCH_MCSC, QCH_CON_IS5P15P0_IS_QCH_MCSC_ENABLE, QCH_CON_IS5P15P0_IS_QCH_MCSC_CLOCK_REQ, QCH_CON_IS5P15P0_IS_QCH_MCSC_EXPIRE_VAL),
	CLK_QCH(IS5P15P0_IS_QCH_VRA, QCH_CON_IS5P15P0_IS_QCH_VRA_ENABLE, QCH_CON_IS5P15P0_IS_QCH_VRA_CLOCK_REQ, QCH_CON_IS5P15P0_IS_QCH_VRA_EXPIRE_VAL),
	CLK_QCH(IS5P15P0_IS_QCH_CSIS_0, QCH_CON_IS5P15P0_IS_QCH_CSIS_0_ENABLE, QCH_CON_IS5P15P0_IS_QCH_CSIS_0_CLOCK_REQ, QCH_CON_IS5P15P0_IS_QCH_CSIS_0_EXPIRE_VAL),
	CLK_QCH(IS5P15P0_IS_QCH_CSIS_1, QCH_CON_IS5P15P0_IS_QCH_CSIS_1_ENABLE, QCH_CON_IS5P15P0_IS_QCH_CSIS_1_CLOCK_REQ, QCH_CON_IS5P15P0_IS_QCH_CSIS_1_EXPIRE_VAL),
	CLK_QCH(IS5P15P0_IS_QCH_IS_3AA, QCH_CON_IS5P15P0_IS_QCH_IS_3AA_ENABLE, QCH_CON_IS5P15P0_IS_QCH_IS_3AA_CLOCK_REQ, QCH_CON_IS5P15P0_IS_QCH_IS_3AA_EXPIRE_VAL),
	CLK_QCH(IS5P15P0_IS_QCH_TPU, QCH_CON_IS5P15P0_IS_QCH_TPU_ENABLE, QCH_CON_IS5P15P0_IS_QCH_TPU_CLOCK_REQ, QCH_CON_IS5P15P0_IS_QCH_TPU_EXPIRE_VAL),
	CLK_QCH(IS5P15P0_IS_QCH_CSIS_DMA, QCH_CON_IS5P15P0_IS_QCH_CSIS_DMA_ENABLE, QCH_CON_IS5P15P0_IS_QCH_CSIS_DMA_CLOCK_REQ, QCH_CON_IS5P15P0_IS_QCH_CSIS_DMA_EXPIRE_VAL),
	CLK_QCH(G2D_QCH, QCH_CON_G2D_QCH_ENABLE, QCH_CON_G2D_QCH_CLOCK_REQ, QCH_CON_G2D_QCH_EXPIRE_VAL),
	CLK_QCH(JPEG_QCH, QCH_CON_JPEG_QCH_ENABLE, QCH_CON_JPEG_QCH_CLOCK_REQ, QCH_CON_JPEG_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_P_MFCMSCL_QCH, QCH_CON_LHM_AXI_P_MFCMSCL_QCH_ENABLE, QCH_CON_LHM_AXI_P_MFCMSCL_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_P_MFCMSCL_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_D_MFCMSCL_QCH, QCH_CON_LHS_AXI_D_MFCMSCL_QCH_ENABLE, QCH_CON_LHS_AXI_D_MFCMSCL_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_D_MFCMSCL_QCH_EXPIRE_VAL),
	CLK_QCH(MFC_QCH, QCH_CON_MFC_QCH_ENABLE, QCH_CON_MFC_QCH_CLOCK_REQ, QCH_CON_MFC_QCH_EXPIRE_VAL),
	CLK_QCH(MFCMSCL_CMU_MFCMSCL_QCH, QCH_CON_MFCMSCL_CMU_MFCMSCL_QCH_ENABLE, QCH_CON_MFCMSCL_CMU_MFCMSCL_QCH_CLOCK_REQ, QCH_CON_MFCMSCL_CMU_MFCMSCL_QCH_EXPIRE_VAL),
	CLK_QCH(MSCL_QCH, QCH_CON_MSCL_QCH_ENABLE, QCH_CON_MSCL_QCH_CLOCK_REQ, QCH_CON_MSCL_QCH_EXPIRE_VAL),
	CLK_QCH(BCM_MFCMSCL_QCH, QCH_CON_BCM_MFCMSCL_QCH_ENABLE, QCH_CON_BCM_MFCMSCL_QCH_CLOCK_REQ, QCH_CON_BCM_MFCMSCL_QCH_EXPIRE_VAL),
	CLK_QCH(SMMU_MFCMSCL_QCH, QCH_CON_SMMU_MFCMSCL_QCH_ENABLE, QCH_CON_SMMU_MFCMSCL_QCH_CLOCK_REQ, QCH_CON_SMMU_MFCMSCL_QCH_EXPIRE_VAL),
	CLK_QCH(SYSREG_MFCMSCL_QCH, QCH_CON_SYSREG_MFCMSCL_QCH_ENABLE, QCH_CON_SYSREG_MFCMSCL_QCH_CLOCK_REQ, QCH_CON_SYSREG_MFCMSCL_QCH_EXPIRE_VAL),
	CLK_QCH(AXI2AHB_CORE_CSSYS_QCH, DMYQCH_CON_AXI2AHB_CORE_CSSYS_QCH_ENABLE, DMYQCH_CON_AXI2AHB_CORE_CSSYS_QCH_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(CCI_400_QCH, QCH_CON_CCI_400_QCH_ENABLE, QCH_CON_CCI_400_QCH_CLOCK_REQ, QCH_CON_CCI_400_QCH_EXPIRE_VAL),
	CLK_QCH(CMU_MIF_CMUREF_QCH, DMYQCH_CON_CMU_MIF_CMUREF_QCH_ENABLE, DMYQCH_CON_CMU_MIF_CMUREF_QCH_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(GIC400_AIHWACG_QCH, QCH_CON_GIC400_AIHWACG_QCH_ENABLE, QCH_CON_GIC400_AIHWACG_QCH_CLOCK_REQ, QCH_CON_GIC400_AIHWACG_QCH_EXPIRE_VAL),
	CLK_QCH(LBLK_MIF_QCH_DMC, QCH_CON_LBLK_MIF_QCH_DMC_ENABLE, QCH_CON_LBLK_MIF_QCH_DMC_CLOCK_REQ, QCH_CON_LBLK_MIF_QCH_DMC_EXPIRE_VAL),
	CLK_QCH(LBLK_MIF_QCH_BCM, QCH_CON_LBLK_MIF_QCH_BCM_ENABLE, QCH_CON_LBLK_MIF_QCH_BCM_CLOCK_REQ, QCH_CON_LBLK_MIF_QCH_BCM_EXPIRE_VAL),
	CLK_QCH(LBLK_MIF_QCH_APBBR, QCH_CON_LBLK_MIF_QCH_APBBR_ENABLE, QCH_CON_LBLK_MIF_QCH_APBBR_CLOCK_REQ, QCH_CON_LBLK_MIF_QCH_APBBR_EXPIRE_VAL),
	CLK_QCH(LBLK_MIF_QCH_ASYNCSFR, DMYQCH_CON_LBLK_MIF_QCH_ASYNCSFR_ENABLE, DMYQCH_CON_LBLK_MIF_QCH_ASYNCSFR_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(LHM_ACE_D_CPUCL0_QCH, QCH_CON_LHM_ACE_D_CPUCL0_QCH_ENABLE, QCH_CON_LHM_ACE_D_CPUCL0_QCH_CLOCK_REQ, QCH_CON_LHM_ACE_D_CPUCL0_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_ACE_D_CPUCL1_QCH, QCH_CON_LHM_ACE_D_CPUCL1_QCH_ENABLE, QCH_CON_LHM_ACE_D_CPUCL1_QCH_CLOCK_REQ, QCH_CON_LHM_ACE_D_CPUCL1_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_ABOX_QCH, QCH_CON_LHM_AXI_D_ABOX_QCH_ENABLE, QCH_CON_LHM_AXI_D_ABOX_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_ABOX_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_APM_QCH, QCH_CON_LHM_AXI_D_APM_QCH_ENABLE, QCH_CON_LHM_AXI_D_APM_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_APM_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_CP_QCH, QCH_CON_LHM_AXI_D_CP_QCH_ENABLE, QCH_CON_LHM_AXI_D_CP_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_CP_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_CSSYS_QCH, QCH_CON_LHM_AXI_D_CSSYS_QCH_ENABLE, QCH_CON_LHM_AXI_D_CSSYS_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_CSSYS_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_DPU_QCH, QCH_CON_LHM_AXI_D_DPU_QCH_ENABLE, QCH_CON_LHM_AXI_D_DPU_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_DPU_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_FSYS_QCH, QCH_CON_LHM_AXI_D_FSYS_QCH_ENABLE, QCH_CON_LHM_AXI_D_FSYS_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_FSYS_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_G3D_QCH, QCH_CON_LHM_AXI_D_G3D_QCH_ENABLE, QCH_CON_LHM_AXI_D_G3D_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_G3D_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_GNSS_QCH, QCH_CON_LHM_AXI_D_GNSS_QCH_ENABLE, QCH_CON_LHM_AXI_D_GNSS_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_GNSS_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_ISPNRT_QCH, QCH_CON_LHM_AXI_D_ISPNRT_QCH_ENABLE, QCH_CON_LHM_AXI_D_ISPNRT_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_ISPNRT_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_ISPRT_QCH, QCH_CON_LHM_AXI_D_ISPRT_QCH_ENABLE, QCH_CON_LHM_AXI_D_ISPRT_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_ISPRT_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_MFCMSCL_QCH, QCH_CON_LHM_AXI_D_MFCMSCL_QCH_ENABLE, QCH_CON_LHM_AXI_D_MFCMSCL_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_MFCMSCL_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_D_WLBT_QCH, QCH_CON_LHM_AXI_D_WLBT_QCH_ENABLE, QCH_CON_LHM_AXI_D_WLBT_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_D_WLBT_QCH_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_P_CP_QCH, QCH_CON_LHM_AXI_P_CP_QCH_ENABLE, QCH_CON_LHM_AXI_P_CP_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_P_CP_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_P_APM_QCH, QCH_CON_LHS_AXI_P_APM_QCH_ENABLE, QCH_CON_LHS_AXI_P_APM_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_P_APM_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_P_CPUCL0_QCH, QCH_CON_LHS_AXI_P_CPUCL0_QCH_ENABLE, QCH_CON_LHS_AXI_P_CPUCL0_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_P_CPUCL0_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_P_CPUCL1_QCH, QCH_CON_LHS_AXI_P_CPUCL1_QCH_ENABLE, QCH_CON_LHS_AXI_P_CPUCL1_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_P_CPUCL1_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_P_DISPAUD_QCH, QCH_CON_LHS_AXI_P_DISPAUD_QCH_ENABLE, QCH_CON_LHS_AXI_P_DISPAUD_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_P_DISPAUD_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_P_FSYS_QCH, QCH_CON_LHS_AXI_P_FSYS_QCH_ENABLE, QCH_CON_LHS_AXI_P_FSYS_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_P_FSYS_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_P_G3D_QCH, QCH_CON_LHS_AXI_P_G3D_QCH_ENABLE, QCH_CON_LHS_AXI_P_G3D_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_P_G3D_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_P_IS_QCH, QCH_CON_LHS_AXI_P_IS_QCH_ENABLE, QCH_CON_LHS_AXI_P_IS_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_P_IS_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_P_MFCMSCL_QCH, QCH_CON_LHS_AXI_P_MFCMSCL_QCH_ENABLE, QCH_CON_LHS_AXI_P_MFCMSCL_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_P_MFCMSCL_QCH_EXPIRE_VAL),
	CLK_QCH(LHS_AXI_P_PERI_QCH, QCH_CON_LHS_AXI_P_PERI_QCH_ENABLE, QCH_CON_LHS_AXI_P_PERI_QCH_CLOCK_REQ, QCH_CON_LHS_AXI_P_PERI_QCH_EXPIRE_VAL),
	CLK_QCH(MAILBOX_QCH_S0, QCH_CON_MAILBOX_QCH_S0_ENABLE, QCH_CON_MAILBOX_QCH_S0_CLOCK_REQ, QCH_CON_MAILBOX_QCH_S0_EXPIRE_VAL),
	CLK_QCH(MAILBOX_ABOX_QCH_S0, QCH_CON_MAILBOX_ABOX_QCH_S0_ENABLE, QCH_CON_MAILBOX_ABOX_QCH_S0_CLOCK_REQ, QCH_CON_MAILBOX_ABOX_QCH_S0_EXPIRE_VAL),
	CLK_QCH(MAILBOX_GNSSS_QCH_S0, QCH_CON_MAILBOX_GNSSS_QCH_S0_ENABLE, QCH_CON_MAILBOX_GNSSS_QCH_S0_CLOCK_REQ, QCH_CON_MAILBOX_GNSSS_QCH_S0_EXPIRE_VAL),
	CLK_QCH(MAILBOX_SECURE_QCH_S0, QCH_CON_MAILBOX_SECURE_QCH_S0_ENABLE, QCH_CON_MAILBOX_SECURE_QCH_S0_CLOCK_REQ, QCH_CON_MAILBOX_SECURE_QCH_S0_EXPIRE_VAL),
	CLK_QCH(MAILBOX_WLBT0_QCH_S0, QCH_CON_MAILBOX_WLBT0_QCH_S0_ENABLE, QCH_CON_MAILBOX_WLBT0_QCH_S0_CLOCK_REQ, QCH_CON_MAILBOX_WLBT0_QCH_S0_EXPIRE_VAL),
	CLK_QCH(MAILBOX_WLBT1_QCH_S0, QCH_CON_MAILBOX_WLBT1_QCH_S0_ENABLE, QCH_CON_MAILBOX_WLBT1_QCH_S0_CLOCK_REQ, QCH_CON_MAILBOX_WLBT1_QCH_S0_EXPIRE_VAL),
	CLK_QCH(MIF_CMU_MIF_QCH, QCH_CON_MIF_CMU_MIF_QCH_ENABLE, QCH_CON_MIF_CMU_MIF_QCH_CLOCK_REQ, QCH_CON_MIF_CMU_MIF_QCH_EXPIRE_VAL),
	CLK_QCH(PDMA_CORE_QCH, QCH_CON_PDMA_CORE_QCH_ENABLE, QCH_CON_PDMA_CORE_QCH_CLOCK_REQ, QCH_CON_PDMA_CORE_QCH_EXPIRE_VAL),
	CLK_QCH(PPCFW_G3D_QCH, QCH_CON_PPCFW_G3D_QCH_ENABLE, QCH_CON_PPCFW_G3D_QCH_CLOCK_REQ, QCH_CON_PPCFW_G3D_QCH_EXPIRE_VAL),
	CLK_QCH(BCM_ACE_CPUCL0_QCH, QCH_CON_BCM_ACE_CPUCL0_QCH_ENABLE, QCH_CON_BCM_ACE_CPUCL0_QCH_CLOCK_REQ, QCH_CON_BCM_ACE_CPUCL0_QCH_EXPIRE_VAL),
	CLK_QCH(BCM_ACE_CPUCL1_QCH, QCH_CON_BCM_ACE_CPUCL1_QCH_ENABLE, QCH_CON_BCM_ACE_CPUCL1_QCH_CLOCK_REQ, QCH_CON_BCM_ACE_CPUCL1_QCH_EXPIRE_VAL),
	CLK_QCH(QE_QCH, QCH_CON_QE_QCH_ENABLE, QCH_CON_QE_QCH_CLOCK_REQ, QCH_CON_QE_QCH_EXPIRE_VAL),
	CLK_QCH(RSTNSYNC_CLK_MIF_CCI_QCH_OCC, DMYQCH_CON_RSTNSYNC_CLK_MIF_CCI_QCH_OCC_ENABLE, DMYQCH_CON_RSTNSYNC_CLK_MIF_CCI_QCH_OCC_CLOCK_REQ, EMPTY_CAL_ID),
	CLK_QCH(SFR_APBIF_CMU_CMU_QCH, QCH_CON_SFR_APBIF_CMU_CMU_QCH_ENABLE, QCH_CON_SFR_APBIF_CMU_CMU_QCH_CLOCK_REQ, QCH_CON_SFR_APBIF_CMU_CMU_QCH_EXPIRE_VAL),
	CLK_QCH(SPDMA_CORE_QCH, QCH_CON_SPDMA_CORE_QCH_ENABLE, QCH_CON_SPDMA_CORE_QCH_CLOCK_REQ, QCH_CON_SPDMA_CORE_QCH_EXPIRE_VAL),
	CLK_QCH(SYSREG_MIF_QCH, QCH_CON_SYSREG_MIF_QCH_ENABLE, QCH_CON_SYSREG_MIF_QCH_CLOCK_REQ, QCH_CON_SYSREG_MIF_QCH_EXPIRE_VAL),
	CLK_QCH(TREX_D_CORE_QCH, QCH_CON_TREX_D_CORE_QCH_ENABLE, QCH_CON_TREX_D_CORE_QCH_CLOCK_REQ, QCH_CON_TREX_D_CORE_QCH_EXPIRE_VAL),
	CLK_QCH(TREX_P_CORE_QCH, QCH_CON_TREX_P_CORE_QCH_ENABLE, QCH_CON_TREX_P_CORE_QCH_CLOCK_REQ, QCH_CON_TREX_P_CORE_QCH_EXPIRE_VAL),
	CLK_QCH(WRAP_ADC_IF_QCH_0, QCH_CON_WRAP_ADC_IF_QCH_0_ENABLE, QCH_CON_WRAP_ADC_IF_QCH_0_CLOCK_REQ, QCH_CON_WRAP_ADC_IF_QCH_0_EXPIRE_VAL),
	CLK_QCH(WRAP_ADC_IF_QCH_1, QCH_CON_WRAP_ADC_IF_QCH_1_ENABLE, QCH_CON_WRAP_ADC_IF_QCH_1_CLOCK_REQ, QCH_CON_WRAP_ADC_IF_QCH_1_EXPIRE_VAL),
	CLK_QCH(MODEM_CMU_QCH, QCH_CON_MODEM_CMU_QCH_ENABLE, QCH_CON_MODEM_CMU_QCH_CLOCK_REQ, QCH_CON_MODEM_CMU_QCH_EXPIRE_VAL),
	CLK_QCH(BUSIF_TMU_QCH, QCH_CON_BUSIF_TMU_QCH_ENABLE, QCH_CON_BUSIF_TMU_QCH_CLOCK_REQ, QCH_CON_BUSIF_TMU_QCH_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_I2C0, QCH_CON_LBLK_PERIC_QCH_I2C0_ENABLE, QCH_CON_LBLK_PERIC_QCH_I2C0_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_I2C0_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_I2C1, QCH_CON_LBLK_PERIC_QCH_I2C1_ENABLE, QCH_CON_LBLK_PERIC_QCH_I2C1_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_I2C1_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_I2C2, QCH_CON_LBLK_PERIC_QCH_I2C2_ENABLE, QCH_CON_LBLK_PERIC_QCH_I2C2_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_I2C2_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_I2C3, QCH_CON_LBLK_PERIC_QCH_I2C3_ENABLE, QCH_CON_LBLK_PERIC_QCH_I2C3_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_I2C3_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_I2C4, QCH_CON_LBLK_PERIC_QCH_I2C4_ENABLE, QCH_CON_LBLK_PERIC_QCH_I2C4_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_I2C4_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_I2C5, QCH_CON_LBLK_PERIC_QCH_I2C5_ENABLE, QCH_CON_LBLK_PERIC_QCH_I2C5_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_I2C5_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_I2C6, QCH_CON_LBLK_PERIC_QCH_I2C6_ENABLE, QCH_CON_LBLK_PERIC_QCH_I2C6_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_I2C6_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_PWM_MOTOR, QCH_CON_LBLK_PERIC_QCH_PWM_MOTOR_ENABLE, QCH_CON_LBLK_PERIC_QCH_PWM_MOTOR_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_PWM_MOTOR_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_SPI0, QCH_CON_LBLK_PERIC_QCH_SPI0_ENABLE, QCH_CON_LBLK_PERIC_QCH_SPI0_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_SPI0_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_SPI1, QCH_CON_LBLK_PERIC_QCH_SPI1_ENABLE, QCH_CON_LBLK_PERIC_QCH_SPI1_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_SPI1_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_USI2, QCH_CON_LBLK_PERIC_QCH_USI2_ENABLE, QCH_CON_LBLK_PERIC_QCH_USI2_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_USI2_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_UART0, QCH_CON_LBLK_PERIC_QCH_UART0_ENABLE, QCH_CON_LBLK_PERIC_QCH_UART0_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_UART0_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_UART1, QCH_CON_LBLK_PERIC_QCH_UART1_ENABLE, QCH_CON_LBLK_PERIC_QCH_UART1_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_UART1_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_HSI2C0, QCH_CON_LBLK_PERIC_QCH_HSI2C0_ENABLE, QCH_CON_LBLK_PERIC_QCH_HSI2C0_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_HSI2C0_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_HSI2C1, QCH_CON_LBLK_PERIC_QCH_HSI2C1_ENABLE, QCH_CON_LBLK_PERIC_QCH_HSI2C1_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_HSI2C1_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_HSI2C2, QCH_CON_LBLK_PERIC_QCH_HSI2C2_ENABLE, QCH_CON_LBLK_PERIC_QCH_HSI2C2_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_HSI2C2_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_HSI2C3, QCH_CON_LBLK_PERIC_QCH_HSI2C3_ENABLE, QCH_CON_LBLK_PERIC_QCH_HSI2C3_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_HSI2C3_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_USI0, QCH_CON_LBLK_PERIC_QCH_USI0_ENABLE, QCH_CON_LBLK_PERIC_QCH_USI0_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_USI0_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_USI1, QCH_CON_LBLK_PERIC_QCH_USI1_ENABLE, QCH_CON_LBLK_PERIC_QCH_USI1_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_USI1_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_GPIO, QCH_CON_LBLK_PERIC_QCH_GPIO_ENABLE, QCH_CON_LBLK_PERIC_QCH_GPIO_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_GPIO_EXPIRE_VAL),
	CLK_QCH(LBLK_PERIC_QCH_UART2, QCH_CON_LBLK_PERIC_QCH_UART2_ENABLE, QCH_CON_LBLK_PERIC_QCH_UART2_CLOCK_REQ, QCH_CON_LBLK_PERIC_QCH_UART2_EXPIRE_VAL),
	CLK_QCH(LHM_AXI_P_PERI_QCH, QCH_CON_LHM_AXI_P_PERI_QCH_ENABLE, QCH_CON_LHM_AXI_P_PERI_QCH_CLOCK_REQ, QCH_CON_LHM_AXI_P_PERI_QCH_EXPIRE_VAL),
	CLK_QCH(MCT_QCH, QCH_CON_MCT_QCH_ENABLE, QCH_CON_MCT_QCH_CLOCK_REQ, QCH_CON_MCT_QCH_EXPIRE_VAL),
	CLK_QCH(OTP_CON_TOP_QCH, QCH_CON_OTP_CON_TOP_QCH_ENABLE, QCH_CON_OTP_CON_TOP_QCH_CLOCK_REQ, QCH_CON_OTP_CON_TOP_QCH_EXPIRE_VAL),
	CLK_QCH(PERI_CMU_PERI_QCH, QCH_CON_PERI_CMU_PERI_QCH_ENABLE, QCH_CON_PERI_CMU_PERI_QCH_CLOCK_REQ, QCH_CON_PERI_CMU_PERI_QCH_EXPIRE_VAL),
	CLK_QCH(SECUCON_QCH, QCH_CON_SECUCON_QCH_ENABLE, QCH_CON_SECUCON_QCH_CLOCK_REQ, QCH_CON_SECUCON_QCH_EXPIRE_VAL),
	CLK_QCH(SYSREG_PERI_QCH, QCH_CON_SYSREG_PERI_QCH_ENABLE, QCH_CON_SYSREG_PERI_QCH_CLOCK_REQ, QCH_CON_SYSREG_PERI_QCH_EXPIRE_VAL),
	CLK_QCH(WDT_CLUSTER0_QCH, QCH_CON_WDT_CLUSTER0_QCH_ENABLE, QCH_CON_WDT_CLUSTER0_QCH_CLOCK_REQ, QCH_CON_WDT_CLUSTER0_QCH_EXPIRE_VAL),
	CLK_QCH(WDT_CLUSTER1_QCH, QCH_CON_WDT_CLUSTER1_QCH_ENABLE, QCH_CON_WDT_CLUSTER1_QCH_CLOCK_REQ, QCH_CON_WDT_CLUSTER1_QCH_EXPIRE_VAL),
};

/*====================The section of controller option nodes===================*/
unsigned int cmucal_option_size = 12;


struct cmucal_option cmucal_option_list[] = {
	CLK_OPTION(CTRL_OPTION_BLK_APM, APM_ENABLE_POWER_MANAGEMENT, APM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_CMU, CMU_ENABLE_POWER_MANAGEMENT, CMU_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_CPUCL0, CPUCL0_ENABLE_POWER_MANAGEMENT, CPUCL0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_CPUCL1, CPUCL1_ENABLE_POWER_MANAGEMENT, CPUCL1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_DISPAUD, DISPAUD_ENABLE_POWER_MANAGEMENT, DISPAUD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_FSYS, FSYS_ENABLE_POWER_MANAGEMENT, FSYS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_G3D, G3D_ENABLE_POWER_MANAGEMENT, G3D_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_IS, IS_ENABLE_POWER_MANAGEMENT, IS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_MFCMSCL, MFCMSCL_ENABLE_POWER_MANAGEMENT, MFCMSCL_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_MIF, MIF_ENABLE_POWER_MANAGEMENT, MIF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_MODEM, MODEM_ENABLE_POWER_MANAGEMENT, MODEM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_OPTION(CTRL_OPTION_BLK_PERI, PERI_ENABLE_POWER_MANAGEMENT, PERI_ENABLE_AUTOMATIC_CLKGATING),
};

