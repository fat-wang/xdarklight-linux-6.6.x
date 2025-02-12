/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Meson8b clock tree IDs
 */

#ifndef __MESON8B_CLKC_H
#define __MESON8B_CLKC_H

#define CLKID_PLL_FIXED		2
#define CLKID_PLL_VID		3
#define CLKID_PLL_SYS		4
#define CLKID_FCLK_DIV2		5
#define CLKID_FCLK_DIV3		6
#define CLKID_FCLK_DIV4		7
#define CLKID_FCLK_DIV5		8
#define CLKID_FCLK_DIV7		9
#define CLKID_CLK81		10
#define CLKID_MALI		11
#define CLKID_CPUCLK		12
#define CLKID_ZERO		13
#define CLKID_MPEG_SEL		14
#define CLKID_MPEG_DIV		15
#define CLKID_DDR		16
#define CLKID_DOS		17
#define CLKID_ISA		18
#define CLKID_PL301		19
#define CLKID_PERIPHS		20
#define CLKID_SPICC		21
#define CLKID_I2C		22
#define CLKID_SAR_ADC		23
#define CLKID_SMART_CARD	24
#define CLKID_RNG0		25
#define CLKID_UART0		26
#define CLKID_SDHC		27
#define CLKID_STREAM		28
#define CLKID_ASYNC_FIFO	29
#define CLKID_SDIO		30
#define CLKID_ABUF		31
#define CLKID_HIU_IFACE		32
#define CLKID_ASSIST_MISC	33
#define CLKID_SPI		34
#define CLKID_I2S_SPDIF		35
#define CLKID_ETH		36
#define CLKID_DEMUX		37
#define CLKID_AIU_GLUE		38
#define CLKID_IEC958		39
#define CLKID_I2S_OUT		40
#define CLKID_AMCLK		41
#define CLKID_AIFIFO2		42
#define CLKID_MIXER		43
#define CLKID_MIXER_IFACE	44
#define CLKID_ADC		45
#define CLKID_BLKMV		46
#define CLKID_AIU		47
#define CLKID_UART1		48
#define CLKID_G2D		49
#define CLKID_USB0		50
#define CLKID_USB1		51
#define CLKID_RESET		52
#define CLKID_NAND		53
#define CLKID_DOS_PARSER	54
#define CLKID_USB		55
#define CLKID_VDIN1		56
#define CLKID_AHB_ARB0		57
#define CLKID_EFUSE		58
#define CLKID_BOOT_ROM		59
#define CLKID_AHB_DATA_BUS	60
#define CLKID_AHB_CTRL_BUS	61
#define CLKID_HDMI_INTR_SYNC	62
#define CLKID_HDMI_PCLK		63
#define CLKID_USB1_DDR_BRIDGE	64
#define CLKID_USB0_DDR_BRIDGE	65
#define CLKID_MMC_PCLK		66
#define CLKID_DVIN		67
#define CLKID_UART2		68
#define CLKID_SANA		69
#define CLKID_VPU_INTR		70
#define CLKID_SEC_AHB_AHB3_BRIDGE	71
#define CLKID_CLK81_A9		72
#define CLKID_VCLK2_VENCI0	73
#define CLKID_VCLK2_VENCI1	74
#define CLKID_VCLK2_VENCP0	75
#define CLKID_VCLK2_VENCP1	76
#define CLKID_GCLK_VENCI_INT	77
#define CLKID_GCLK_VENCP_INT	78
#define CLKID_DAC_CLK		79
#define CLKID_AOCLK_GATE	80
#define CLKID_IEC958_GATE	81
#define CLKID_ENC480P		82
#define CLKID_RNG1		83
#define CLKID_GCLK_VENCL_INT	84
#define CLKID_VCLK2_VENCLMCC	85
#define CLKID_VCLK2_VENCL	86
#define CLKID_VCLK2_OTHER	87
#define CLKID_EDP		88
#define CLKID_AO_MEDIA_CPU	89
#define CLKID_AO_AHB_SRAM	90
#define CLKID_AO_AHB_BUS	91
#define CLKID_AO_IFACE		92
#define CLKID_MPLL0		93
#define CLKID_MPLL1		94
#define CLKID_MPLL2		95
#define CLKID_MPLL0_DIV		96
#define CLKID_MPLL1_DIV		97
#define CLKID_MPLL2_DIV		98
#define CLKID_CPU_IN_SEL	99
#define CLKID_CPU_IN_DIV2	100
#define CLKID_CPU_IN_DIV3	101
#define CLKID_CPU_SCALE_DIV	102
#define CLKID_CPU_SCALE_OUT_SEL	103
#define CLKID_MPLL_PREDIV	104
#define CLKID_FCLK_DIV2_DIV	105
#define CLKID_FCLK_DIV3_DIV	106
#define CLKID_FCLK_DIV4_DIV	107
#define CLKID_FCLK_DIV5_DIV	108
#define CLKID_FCLK_DIV7_DIV	109
#define CLKID_NAND_SEL		110
#define CLKID_NAND_DIV		111
#define CLKID_NAND_CLK		112
#define CLKID_PLL_FIXED_DCO	113
#define CLKID_HDMI_PLL_DCO	114
#define CLKID_PLL_SYS_DCO	115
#define CLKID_CPU_CLK_DIV2	116
#define CLKID_CPU_CLK_DIV3	117
#define CLKID_CPU_CLK_DIV4	118
#define CLKID_CPU_CLK_DIV5	119
#define CLKID_CPU_CLK_DIV6	120
#define CLKID_CPU_CLK_DIV7	121
#define CLKID_CPU_CLK_DIV8	122
#define CLKID_APB_SEL		123
#define CLKID_APB		124
#define CLKID_PERIPH_SEL	125
#define CLKID_PERIPH		126
#define CLKID_AXI_SEL		127
#define CLKID_AXI		128
#define CLKID_L2_DRAM		130
#define CLKID_L2_DRAM_SEL	129
#define CLKID_HDMI_PLL_LVDS_OUT 131
#define CLKID_HDMI_PLL_HDMI_OUT	132
#define CLKID_VID_PLL_IN_SEL	133
#define CLKID_VID_PLL_IN_EN	134
#define CLKID_VID_PLL_PRE_DIV	135
#define CLKID_VID_PLL_POST_DIV	136
#define CLKID_VID_PLL_FINAL_DIV	137
#define CLKID_VCLK_IN_SEL	138
#define CLKID_VCLK_IN_EN	139
#define CLKID_VCLK_DIV1		140
#define CLKID_VCLK_DIV2_DIV	141
#define CLKID_VCLK_DIV2		142
#define CLKID_VCLK_DIV4_DIV	143
#define CLKID_VCLK_DIV4		144
#define CLKID_VCLK_DIV6_DIV	145
#define CLKID_VCLK_DIV6		146
#define CLKID_VCLK_DIV12_DIV	147
#define CLKID_VCLK_DIV12	148
#define CLKID_VCLK2_IN_SEL	149
#define CLKID_VCLK2_IN_EN	150
#define CLKID_VCLK2_DIV1	151
#define CLKID_VCLK2_DIV2_DIV	152
#define CLKID_VCLK2_DIV2	153
#define CLKID_VCLK2_DIV4_DIV	154
#define CLKID_VCLK2_DIV4	155
#define CLKID_VCLK2_DIV6_DIV	156
#define CLKID_VCLK2_DIV6	157
#define CLKID_VCLK2_DIV12_DIV	158
#define CLKID_VCLK2_DIV12	159
#define CLKID_CTS_ENCT_SEL	160
#define CLKID_CTS_ENCT		161
#define CLKID_CTS_ENCP_SEL	162
#define CLKID_CTS_ENCP		163
#define CLKID_CTS_ENCI_SEL	164
#define CLKID_CTS_ENCI		165
#define CLKID_HDMI_TX_PIXEL_SEL	166
#define CLKID_HDMI_TX_PIXEL	167
#define CLKID_CTS_ENCL_SEL	168
#define CLKID_CTS_ENCL		169
#define CLKID_CTS_VDAC0_SEL	170
#define CLKID_CTS_VDAC0		171
#define CLKID_HDMI_SYS_SEL	172
#define CLKID_HDMI_SYS_DIV	173
#define CLKID_HDMI_SYS		174
#define CLKID_MALI_0_SEL	175
#define CLKID_MALI_0_DIV	176
#define CLKID_MALI_0		177
#define CLKID_MALI_1_SEL	178
#define CLKID_MALI_1_DIV	179
#define CLKID_MALI_1		180
#define CLKID_GP_PLL_DCO	181
#define CLKID_GP_PLL		182
#define CLKID_VPU_0_SEL		183
#define CLKID_VPU_0_DIV		184
#define CLKID_VPU_0		185
#define CLKID_VPU_1_SEL		186
#define CLKID_VPU_1_DIV		187
#define CLKID_VPU_1		189
#define CLKID_VPU		190
#define CLKID_VDEC_1_SEL	191
#define CLKID_VDEC_1_1_DIV	192
#define CLKID_VDEC_1_1		193
#define CLKID_VDEC_1_2_DIV	194
#define CLKID_VDEC_1_2		195
#define CLKID_VDEC_1		196
#define CLKID_VDEC_HCODEC_SEL	197
#define CLKID_VDEC_HCODEC_DIV	198
#define CLKID_VDEC_HCODEC	199
#define CLKID_VDEC_2_SEL	200
#define CLKID_VDEC_2_DIV	201
#define CLKID_VDEC_2		202
#define CLKID_VDEC_HEVC_SEL	203
#define CLKID_VDEC_HEVC_DIV	204
#define CLKID_VDEC_HEVC_EN	205
#define CLKID_VDEC_HEVC		206
#define CLKID_CTS_AMCLK_SEL	207
#define CLKID_CTS_AMCLK_DIV	208
#define CLKID_CTS_AMCLK		209
#define CLKID_CTS_MCLK_I958_SEL	210
#define CLKID_CTS_MCLK_I958_DIV	211
#define CLKID_CTS_MCLK_I958	212
#define CLKID_CTS_I958		213
#define CLKID_VCLK_EN		214
#define CLKID_VCLK2_EN		215
#define CLKID_VID_PLL_LVDS_EN	216
#define CLKID_HDMI_PLL_DCO_IN   217
#define CLKID_ETH_CLK_SEL	218
#define CLKID_ETH_CLK_DIV	219
#define CLKID_ETH_CLK_PHASE	220
#define CLKID_ETH_CLK		221
#define CLKID_MPEG_RTC_OSC_SEL	222

#endif /* __MESON8B_CLKC_H */
